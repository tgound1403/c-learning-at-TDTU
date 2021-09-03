#include <stdio.h>
 
int sum(int n)
{
    if(n == 0) // điều kiện dừng (phần cơ sở)
      return 0;
    return n + sum(n-1);
}
 
int main()
{
    printf("Sum = %d", sum(5));
}