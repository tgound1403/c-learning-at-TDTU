#include <stdio.h>
#include <string.h>
void main()
{
    char ht[50];
    printf("What's your full name: ");
    fgets(ht, 50, stdin);
    int i;
    printf("First Name: ");
    for (i = 0; ht[i] != ' '; i++)
        printf("%c", ht[i]);
    printf("\n Last Name: ");
    for (i = strlen(ht); ht[i] != ' '; i--)
    {
    }
    for (int j = i; j <= strlen(ht); j++)
        printf("%c", ht[j]);
}