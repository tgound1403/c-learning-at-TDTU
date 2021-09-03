#include<math.h> 
#include<string.h>
int palindrome ( char t[])
{
	int c,i;
	for(i=0;i<=strlen(t)/2;i++)  
    {
    	if(t[i]==t[strlen(t)+i-1])
    	c++;
 
 	}
 	if(c==i)
 	    return 1;
    else
        return 0;
}
int main (void)
{
	char t[100];
	gets(t);
	printf("%d",palindrome(t));

    return 0;
}