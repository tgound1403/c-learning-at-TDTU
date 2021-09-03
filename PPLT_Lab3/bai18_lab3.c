#include<stdio.h>    
#include<stdlib.h>  
int binary( int n)
{  
    int a[10000],i;     
    for(i=0;n>0;i++)    
    {    
        a[i]=n%2;    
        n=n/2;    
    }    
    printf("\nBinary of Given Number is=");    
    for(i=i-1;i>=0;i--)    
    {    
        printf("%d",a[i]);    
    }    
    return 0;  
}
void main ( int n)
{ 
    printf("Enter the number to convert: ");    
    scanf("%d",&n);    
    binary(n);
}