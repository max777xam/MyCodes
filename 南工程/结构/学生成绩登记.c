#include <stdio.h>
struct student
{
    int num;
    char name[20];
    char sex;
    int score[4];
    double average;
};
void input(struct student *p, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i].num);
        scanf("%s", p[i].name);
        scanf("%c", &p[i].sex);
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &p[i].score[j]);
        }
        p[i].average = (p[i].score[0] + p[i].score[1] + p[i].score[2] + p[i].score[3]) / 4.0;
    }
}
void output(struct student *p, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("Ñ§ºÅ£º%2d ", p[i].num);
        printf("ĞÕÃû£º%s\n", p[i].name);
    }
}
void sort(struct student *p, int n)
{
    int i, j;
    struct student t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (p[j].average < p[j + 1].average)
            {
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
        }
    }
}
int main()
{
    struct student s[100];
    int n;
    scanf("%d", &n);
    input(s, n);
    sort(s, n);
    output(s, n);
    return 0;
}