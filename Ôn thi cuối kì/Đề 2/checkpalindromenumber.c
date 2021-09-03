#include<stdio.h>
int reverse(int n, int check) 
{ 
    if (n == 0) // dieu kien dung 
        return check; 
    // stores the reverse of a number 
    check = (check * 10) + (n % 10); 
    return reverse(n / 10, check); 
} 
void revcheck (int n)
{
    if ( n == reverse(n,0))
        printf("Yes");
    else printf("No");
}
void main ()
{
    int n=12321;
    revcheck(n);
}