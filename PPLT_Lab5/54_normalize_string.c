#include <stdio.h>
#include <string.h>
void main()
{
    char kt[50];
    printf("Input: ");
    fgets(kt, 50, stdin);
    int i, j;
    // tim vi tri co khoang trong lien tiep
    for (i = 0; i <= strlen(kt); i++)
        if ((kt[i] == ' ') && (kt[i - 1] == ' '))
            while (kt[i] == ' ')
                // xoa chua lai 1 khoang trong
                for (j = i; j <= strlen(kt); j++)
                    kt[j] = kt[j + 1];
    printf("After delete useless space: %s", kt);
    // chuyen ve lowercase
    for (i = 0; i <= strlen(kt); i++)
        if (kt[i] >= 'A' && kt[i] <= 'Z')
            kt[i] = kt[i] + 32;
    // sua thanh chu uppercase
    for (i = 0; i <= strlen(kt); i++)
        if (kt[i] >= 'a' && kt[i] <= 'z' && kt[i - 1] == ' ')
        {
            kt[0] = kt[0] - 32;
            kt[i] = kt[i] - 32;
        }
    printf("After normalize: %s", kt);
}