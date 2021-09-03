#include <stdio.h>
#include <conio.h>
#include <string.h>
#define size 50
void main()
{
    char a[size];
    char b[size];
    char c[size];
    int p = 0, r = 0, i = 0;
    int t = 0;
    int x, g, s, n, o;
    printf("Enter First String:");
    fgets(a,size,stdin);
    printf("Enter Second String:");
    fgets(b,size,stdin);
    printf("Enter the position where the item has to be inserted: ");
    scanf("%d", &p);
    r = strlen(a);
    n = strlen(b);
    i = 0;

    // Copying the input string into another array
    while (i <= r)
    {
        c[i] = a[i];
        i++;
    }
    s = n + r;
    o = p + n;

    // Adding the sub-string
    for (i = p; i < s; i++)
    {
        x = c[i];
        if (t < n)
        {
            a[i] = b[t];
            t = t + 1;
        }
        a[o] = x;
        o = o + 1;
    }

    printf("%s", a);
    getch();
}
