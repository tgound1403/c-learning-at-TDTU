 //sigma to n 
 #include <stdio.h>

int main ()
{
	int n,i,s=0; 
	printf("Moi ban nhap n: " );
	scanf("%d",&n);
	for (i=1; i<=n;i++)
	{
		s=s+i;
	}
	printf("tong cac so tu 1 den %d la: %d",n,s);
}
