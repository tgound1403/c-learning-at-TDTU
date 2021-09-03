#include<stdio.h> 
#include<math.h> 
void main () 
{
    int n;
    float S=0; 
    do
    {
        scanf("%d", &n);
        if (n<=0)
            printf("nhap lai n\n");
    }
    while (n<=0);
    for (int i=1; i<=n; i++)
        S+= (i+1)/sqrt(i);
    printf("%f", S);
}