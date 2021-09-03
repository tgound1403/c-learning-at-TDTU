#include <stdio.h>
int perfect (int end)
{
    int i, j, sum;
    /* Iterate from 1 to end */
    for(i=1; i<=end; i++)
    {
        sum = 0;
        /* Check whether the current number i is Perfect number or not */
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        /* If the current number i is Perfect number */
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
void main (int end) 
{
    printf("Enter upper limit: ");
    scanf("%d", &end);
    printf("All Perfect numbers between 1 to %d:\n", end);
    perfect(end);
}