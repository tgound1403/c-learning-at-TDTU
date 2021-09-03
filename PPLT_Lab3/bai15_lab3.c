#include <stdio.h>

int prime (int n)
{
	int i,j,c=0;
	if(n>2)
	{
		for(i=3;i<=n;i++)
		{
			for (j=2;j<i;j++) if ((i% j)==0)c=1;;
			if (c==0)printf("%d ",i);
			c=0;
		}
    }
}
void  main ( int n)
{
    do
	{
		printf("Moi ban nhap :");
		scanf("%d",&n);
	}
    while(n==0||n<0);
    prime(n); 
}