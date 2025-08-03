#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number = 5;
    int *value = &number;
    printf("number's address=[%p]\n", &number);
    printf("number's value=[%d]\n", number);
    printf("value's adress=[%p]\n", &value);
    printf("value's value=[%p]\n", value);
    printf("value's pointing value=[%d]\n", *value);
    return 0;
}