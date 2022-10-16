#include <bits/stdc++.h>
using namespace std;
int encrypt(char *text, char *result, char *k)
{
    int i, j = 0, z = 0;
    int m = strlen(k);
    int l = strlen(text);
    for (i = 0; i < l; i++)
    {
        //�жϴ�Сд
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            if (j == m)
            {
                j = 0;
                result[z] = (text[i] - 'A' + k[j] - 'A') % 26 + 'A';
            }
            else
            {
                result[z] = (text[i] - 'A' + k[j] - 'A') % 26 + 'A';
            }
            j++;
        }
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            if (j == m)
            {
                j = 0;
                result[z] = (text[i] - 'a' + k[j] - 'a') % 26 + 'a';
            }
            else
            {
                result[z] = (text[i] - 'a' + k[j] - 'a') % 26 + 'a';
            }
            j++;
        }
        else
        {
            result[z] = text[i];
        }
        z++;
    }
    return 0;
}
int decrypt(char *text, char *result, char *k)
{
    int i, j = 0, z = 0;
    int m = strlen(k);
    int l = strlen(text);
    for (i = 0; i < l; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            if (j == m)
            {
                j = 0;
                result[z] = (text[i] - k[j] + 26) % 26 + 'A';
            }
            else
            {
                result[z] = (text[i] - k[j] + 26) % 26 + 'A';
            }
            j++;
        }
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            if (j == m)
            {
                j = 0;
                result[z] = (text[i] - k[j] + 26) % 26 + 'a';
            }
            else
            {
                result[z] = (text[i] - k[j] + 26) % 26 + 'a';
            }
            j++;
        }
        else
        {
            result[z] = text[i];
        }
        z++;
    }
    return 0;
}

int main()
{
    char text[50] = "";
    char result[50] = "";
    char k[50] = "";
    int type;
    printf("--------��ӭʹ��Vigenere����-----------\n");
    printf("����д���Ļ�������\n");
    scanf("%[^\n]", text);
    printf("��ѡ����ܷ�ʽ������1���ܣ�����2����\n");
    scanf("%d", &type);
    printf("��������Կk\n");
    scanf("%s", k);
    if (type == 1)
    {
        encrypt(text, result, k);
        printf("����%s������Ϊ:%s\n", text, result);
    }
    else if (type == 2)
    {
        decrypt(text, result, k);
        printf("����%s������Ϊ:%s\n", text, result);
    }
    return 0;
}
