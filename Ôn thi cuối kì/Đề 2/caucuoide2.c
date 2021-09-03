#include<stdio.h>
#include<string.h>
void xoachucaidau ( char a[])
{
    int i;
    for (i=1; i<strlen(a);i++)
    {
    if (a[i]==' ')
    {
        printf("%c",a[i]);
        i++;
    }
    else
        printf("%c", a[i]);
    }
}
void main ()
{
    char a[20];
    printf("nhap vao chuoi: ");
    fgets(a,20,stdin);
    xoachucaidau(a);
}