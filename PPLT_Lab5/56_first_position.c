#include <stdio.h>
#include <string.h>
#define size 50
void main()
{
    char a[size], x;
    printf("Input one string: ");
    fgets(a, 50, stdin);
    printf("input one character: ");
    scanf("%c", &x);
    int i, pos = 0;
    for (i = 0; i <= strlen(a); i++)
    {
        if (x == a[i])
        {
            pos = 1;
            printf("the first position in string appear the charater: %d ", i);
            break;
        }
    }
    if (pos = 0)
        printf("character not appear in string");
}