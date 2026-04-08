#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265358979323846
#define EPSILON 1e-12      // 收敛精度
#define MAX_ITERATIONS 100 // 最大迭代次数
/*
 * 函数f(x) = sin(π/3 + x) - (√3/2) * e^(-√3 * x)
 * 寻找f(x) = 0的根
 */
double f(double x)
{
    double sin_pi3 = sqrt(3.0) / 2.0; // sin(π/3)
    return sin(PI / 3.0 + x) - sin_pi3 * exp(-sqrt(3.0) * x);
}
/*
 * 导数f'(x) = cos(π/3 + x) + (3/2) * e^(-√3 * x)
 */
double f_prime(double x)
{
    double sin_pi3 = sqrt(3.0) / 2.0;
    return cos(PI / 3.0 + x) + (3.0 / 2.0) * exp(-sqrt(3.0) * x);
}
/*
 * 二分法求解
 * 在区间[a, b]内寻找根
 */
double bisection(double a, double b, int *iterations)
{
    double fa = f(a);
    double fb = f(b);
    if (fa * fb > 0)
    {
        // 区间内没有根或根的数量为偶数
        return NAN;
    }
    double c = a;
    *iterations = 0;
    while ((b - a) > EPSILON && *iterations < MAX_ITERATIONS)
    {
        c = (a + b) / 2.0;
        double fc = f(c);
        if (fabs(fc) < EPSILON)
        {
            break;
        }
        if (fa * fc < 0)
        {
            b = c;
            fb = fc;
        }
        else
        {
            a = c;
            fa = fc;
        }

        (*iterations)++;
    }
    return c;
}
/*
 * 牛顿迭代法求解
 * 从初始值x0开始迭代
 */
double newton_raphson(double x0, int *iterations)
{
    double x = x0;
    *iterations = 0;

    while (*iterations < MAX_ITERATIONS)
    {
        double fx = f(x);
        double fpx = f_prime(x);
        if (fabs(fpx) < 1e-15)
        {
            // 导数太小，迭代失败
            return NAN;
        }
        double dx = fx / fpx;
        x = x - dx;
        (*iterations)++;
        if (fabs(dx) < EPSILON && fabs(fx) < EPSILON)
        {
            break;
        }
    }
    return x;
}
/*
 * 混合方法: 先用二分法定位根，再用牛顿法精确求解
 */
double hybrid_method(double a, double b, int *iterations)
{
    // 首先使用二分法找到近似根
    int bisect_iter;
    double approx_root = bisection(a, b, &bisect_iter);
    if (isnan(approx_root))
    {
        return NAN;
    }
    // 使用牛顿法精细化
    int newton_iter;
    double final_root = newton_raphson(approx_root, &newton_iter);
    *iterations = bisect_iter + newton_iter;
    return final_root;
}
/*
 * 验证解是否满足方程
 */
int verify_solution(double x)
{
    double left = sin(PI / 3.0 + x);
    double right = (sqrt(3.0) / 2.0) * exp(-sqrt(3.0) * x);
    double error = fabs(left - right);
    printf("  x = %-20.15f\n", x);
    printf("  左侧 sin(π/3 + x)  = %-20.15f\n", left);
    printf("  右侧 (√3/2)e^(-√3x) = %-20.15f\n", right);
    printf("  误差 = %-20.2e\n", error);
    return error < 1e-8 ? 1 : 0;
}
/*
 * 搜索区间内的所有根
 */
int find_roots_in_interval(double start, double end, double step, double *solutions, int max_solutions)
{
    int count = 0;
    double a = start;
    while (a < end && count < max_solutions - 1)
    {
        double b = a + step;
        double fa = f(a);
        double fb = f(b);
        // 检查区间内是否有根
        if (fa * fb <= 0 && !(fa == 0 && fabs(a) < EPSILON))
        {
            // 排除 x = 0
            if (!(a < 0 && b > 0))
            {
                int iterations;
                double root = hybrid_method(a, b, &iterations);
                if (!isnan(root) && fabs(root) > EPSILON)
                {
                    // 检查是否是新解（避免重复）
                    int is_new = 1;
                    for (int i = 0; i < count; i++)
                    {
                        if (fabs(solutions[i] - root) < 1e-6)
                        {
                            is_new = 0;
                            break;
                        }
                    }
                    if (is_new)
                    {
                        solutions[count++] = root;
                        printf("找到解: x_%d = %.15f (迭代次数: %d)\n",
                               count, root, iterations);
                    }
                }
            }
        }
        a = b;
    }
    return count;
}
int main()
{
    printf("============================================================\n");
    printf("   求解方程: sin(π/3 + x) = sin(π/3) × e^(-x/tan(π/6)), x ≠ 0\n");
    printf("============================================================\n\n");
    printf("方程化简:\n");
    printf("  sin(π/3) = √3/2\n");
    printf("  tan(π/6) = 1/√3\n");
    printf("  1/tan(π/6) = √3\n\n");
    printf("化简后的方程:\n");
    printf("  sin(π/3 + x) = (√3/2) × e^(-√3 × x)\n\n");
    printf("============================================================\n");
    printf("                        寻找解\n");
    printf("============================================================\n\n");
    // 存储解的数组
    double solutions[100];
    int num_solutions = 0;
    // 搜索正数区间的解
    printf("【搜索正数解】\n");
    num_solutions = find_roots_in_interval(0.1, 30.0, 0.5, solutions, 100);
    // 搜索负数区间的解
    printf("\n【搜索负数解】\n");
    int neg_count = find_roots_in_interval(-30.0, -0.1, 0.5, solutions + num_solutions, 100 - num_solutions);
    num_solutions += neg_count;
    // 对解进行排序
    for (int i = 0; i < num_solutions - 1; i++)
    {
        for (int j = i + 1; j < num_solutions; j++)
        {
            if (solutions[i] > solutions[j])
            {
                double temp = solutions[i];
                solutions[i] = solutions[j];
                solutions[j] = temp;
            }
        }
    }
    printf("\n============================================================\n");
    printf("                      验证解\n");
    printf("============================================================\n\n");
    int valid_count = 0;
    for (int i = 0; i < num_solutions; i++)
    {
        printf("解 %d:\n", i + 1);
        if (verify_solution(solutions[i]))
        {
            valid_count++;
        }
        printf("\n");
    }
    printf("============================================================\n");
    printf("                      结果汇总\n");
    printf("============================================================\n\n");
    printf("共找到 %d 个有效解 (x ≠ 0):\n\n", valid_count);
    for (int i = 0; i < num_solutions; i++)
    {
        if (fabs(solutions[i]) > EPSILON)
        {
            printf("  x_%d = %.10f\n", i + 1, solutions[i]);
        }
    }
    printf("\n解的模式分析:\n");
    printf("  方程的解满足: x_n ≈ (3n-1)π/3 (n ≥ 2)\n");
    printf("  其中第一个解 x_1 ≈ 2.0703969330 有明显偏差\n");
    printf("  其他解随着n增大逐渐趋近于 (3n-1)π/3\n\n");
    printf("============================================================\n");
    printf("                       程序结束\n");
    printf("============================================================\n");
    return 0;
}