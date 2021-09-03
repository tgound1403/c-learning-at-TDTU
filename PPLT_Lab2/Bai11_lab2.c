#include<stdio.h>    
int main()  
{  
	int n,r,s=0,x;  
 	printf("Enter n ");  
	scanf("%d",&n);  
	x=n;  
	while(n>0)  
	{  
		r=n%10;  
		s=(s*10)+r;  
		n=n/10;  
	}  
	if(x==s)  printf("\nSo ban da nhap la so Palindrome!");  
	else  printf("\nSo ban da nhap khong phai la so Palindrome!");  
}  
