#include<stdio.h>
int maximum (int a[], int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return a[0];
	else
	{
		if (a[n - 1] > maximum(a, n - 1))
			return a[n - 1];
		else
			return maximum(a, n - 1);
	}
}
int main ()  
{     
    int a[6]={5,4,12,9,1};
    int n=6,i=0;
    printf("%d",maximum(a,n));
    return 0;
}