#include<stdio.h>
float phuongtrinh ( int x )
{
    if (x==0)
        return 1;
    else return ( 2*phuongtrinh(x-1)+3/4);
}
void main () 
{
    printf("%f", phuongtrinh(5));
}
