//Armstrong number
#include<stdio.h>  
#include<math.h>
void main()    
{    
	int n,sum=0,count=0,a;
	printf("nhap 1 so: ");
	scanf("%d",&n);
	int x=n;
	while(n>0)
	{
		count++;
		n=n/10;
	}
	int y=x;
	while(x>0)
	{
		a=x%10;
		sum=sum+pow(a,count);
		x=x/10;
	}
	if (y==sum) 
		printf("%d is Armstrong  number ",y);    
	else    
		printf("%d is not Armstrong number",y );    
}   
