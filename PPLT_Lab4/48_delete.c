#include <stdio.h>
void main()
{
    int a[50], n;
    printf("How many factor you want in array: ");
    scanf("%d", &n);
    int i, x;
    for (i = 0; i <= n; i++)
    {
        printf("input factor %d of array: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("you want delete element at position: ");
    scanf("%d", &x);
    for (i = x; i <= n; i++)
        a[x] = a[x + 1];
    printf("array after delete: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}