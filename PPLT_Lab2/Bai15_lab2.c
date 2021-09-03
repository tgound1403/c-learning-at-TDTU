#include <stdio.h>

int main()
{
	int n,i,j,c=0;
	do
	{
		printf("Moi ban nhap :");
		scanf("%d",&n);
	}while(n==0||n<0);
	if(n>2)
	{
		printf("Cach 1: ");
		for(i=3;i<=n;i++)
		{
			for (j=2;j<i;j++) if ((i% j)==0)c=1;;
			if (c==0)printf("%d ",i);
			c=0;
		}
		i=3;
		printf("\nCach 2: ");
		while(i<=n)
		{
			for (j=2;j<i;j++)
			{
				if (i% j==0)c=1;
			}
			if (c==0)printf("%d ",i);
			i++;
			c=0;
		}
		i=3;
		printf("\nCach 3: ");
		do
		{
			for (j=2;j<i;j++)
			{
				if (i% j==0)c=1;;
			}
			if (c==0)printf("%d ",i);
			i++;
			c=0;
		}
		while(i<=n);
	}
	else printf("1 2");
}
