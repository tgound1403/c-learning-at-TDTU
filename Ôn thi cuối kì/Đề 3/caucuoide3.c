#include<stdio.h>
#include<string.h>
void main ()
{
    char a[100];
    int type;
    printf("nhap chuoi: ");
    fgets(a,100,stdin);
    printf("nhap type: ");
    scanf("%d", &type);
    if (type==1) //to uppercase 
    {
        for (int i=0; i<=strlen(a);i++)
            if ((97<=a[i])&&(a[i]<=121))
                a[i]-=32;
    }    
    else if (type==2) //to lowercase
    { 
        for (int i=0; i<=strlen(a);i++)
            if ((65<=a[i])&&(a[i]<=89))
                a[i]+=32;
    }
    else if (type==3) //to toggle case
    { 
        for (int i=0; i<=strlen(a);i++)
        {
            if ((65<=a[i])&&(a[i]<=89))
                a[i]+=32;
            else if ((97<=a[i])&&(a[i]<=121))
                a[i]-=32;
        }
    }
    printf("%s", a);
}