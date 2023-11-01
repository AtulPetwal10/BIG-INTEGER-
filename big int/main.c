#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"library.h"
int main()
{
    char str1[20000];
    char str2[20000];
    char answer[200000];
    char ch;
     int num;
    printf("enter operation \n");
    scanf("%c", &ch);
    if (ch != '/' && ch != '%')
    {
        printf("enter string 2:");
        scanf("%s", str1);
        printf("eneter string 1:");
        scanf("%s", str2);
    }
    switch (ch)
    {
    case '+':
        addition(str1, str2, answer);

        puts(answer);
        break;
    case '-':
        subtract(str1, str2);
        break;
    case '/':
        printf("enter dividend:");
        scanf("%s", str1);
        printf("enter divisior:");
       
        scanf("%d", &num);
        division(str1, num, answer);
        puts(answer);
        break;
    case '*':
        multiply(str1, str2);
        break;
    case '%':
        printf("enter dividend:");
        scanf("%s", str1);
        printf("enter divisior:");
        scanf("%d", &num);
        modules(str1, num, answer);
        break;
    }
}