//swap first and last digit 
#include <stdio.h>
#include<math.h>
int main()
{
	int n,a,b,count=0;
	printf("Moi ban nhap :");
	scanf("%d",&n);
	int x=n;
	b=n%10;
	while(n>0)
	{
		a=n%10;
		count++;
		n=n/10;
	}
	int kq= b*pow(10,count-1)+((x % (int)pow(10,count-1))/10)*10+a;
	printf("ket qua la: %d",kq);
}