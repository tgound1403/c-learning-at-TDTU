#include <stdio.h>
#include <conio.h>
#include <string.h>
 void delchar(char *x,int a, int b)
{
	if ((a+b-1) <= strlen(x))
	{
		strcpy(&x[b-1],&x[a+b-1]);
		puts(x);
	}
}
 
void main()
{
	char string[50];
	int n,pos,p;
	printf("Enter the string: ");
	fgets(string,50,stdin);
	printf("Enter the position from where to delete: ");
	scanf("%d",&pos);
	printf("Enter the number of characters to be deleted: ");
	scanf("%d",&n);
	delchar(string, n,pos);
	
}
