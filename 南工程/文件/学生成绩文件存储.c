#include <stdio.h>
int main()
{
    FILE *fp;
    char *filename = "STUDENT.DAT";
    float scores[10][3];
    char *subjects[] = {"数学", "政治", "英语"};
    int i, j;
    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("无法打开文件 %s\n", filename);
        return 1;
    }
    for (i = 0; i < 10; i++)
    {
        printf("学生%d的成绩：", i + 1);
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &scores[i][j]);
        }
        fprintf(fp, "学生%d: ", i + 1);
        for (j = 0; j < 3; j++)
        {
            fprintf(fp, "%s=%.2f ", subjects[j], scores[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("无法打开文件 %s 进行读取\n", filename);
        return 1;
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scores[i][j] = 0.0;
        }
    }
    i = 0;
    while (i < 10)
    {
        fscanf(fp, "%f %f %f", &scores[i][0], &scores[i][1], &scores[i][2]);
        i++;
    }
    fclose(fp);
    return 0;
}