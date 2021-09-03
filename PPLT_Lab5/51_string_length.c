#include <stdio.h>
#include <string.h>
void main()
{
    char ht[50];
    printf("Input: ");
    fgets(ht, 50, stdin);
    int i, count = 0;
    for (i = 0; ht[i] != '\0'; i++)
        count++;
    printf("number of factor in string: %d", count);
    printf("\n string length: %d", strlen(ht));
}