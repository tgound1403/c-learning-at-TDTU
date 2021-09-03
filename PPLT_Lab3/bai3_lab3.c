#include<stdio.h> 
int table (int n) 
{
	int i;
	for ( int i=1;i<=10;i++)
		{
			printf(" %d x %d = %d\n",n,i, n*i); 
		}
}
void main () 
{
    int n;
    printf("ban muon cuu chuong may "); 
    scanf("%d", &n);
	table(n);
}