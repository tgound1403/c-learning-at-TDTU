#include <stdio.h>
#define size 100
void main()
{
    char a[size], b[size], t[size * 2];
    int i;
    printf("input the first string: ");
    fgets(a, size, stdin);
    int counta = 0;
    for (i = 0; a[i] != '\0'; i++)
        counta++;
    printf("input the second string: ");
    fgets(b, size, stdin);
    int countb = 0;
    for (i = 0; b[i] != '\0'; i++)
        countb++;
    for (i = 0; i <= counta; i++)
        t[i] = a[i];
    for (i = 0; i <= countb; i++)
        t[i - 1 + counta] = b[i];

    printf("after concatenating: %s", t);
}