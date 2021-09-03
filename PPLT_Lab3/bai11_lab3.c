#include<stdio.h> 
int palindrome ( int n )
{
    int r,s=0,x;
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
void main ( int n)
{
    printf("Enter n ");  
	scanf("%d",&n);  
    palindrome(n);
}