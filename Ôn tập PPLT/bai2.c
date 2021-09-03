#include<stdio.h>
#define gia_chang_1 18000
#define gia_chang_2 8000
#define gia_chang_3 6000
#define gia_chang_4 4000

void main ()
{
    int d, tien;
    printf("nhap vao so km di duoc: ");
    scanf("%d", &d);
    if( d <= 1 )
        tien = gia_chang_1; 
    if((1<d)&&(d<=10))
        tien = gia_chang_1 + (d-1)*gia_chang_2;
    if((10<d)&&(d<=30))
        tien = gia_chang_1 + 9*gia_chang_2 + (d-10)*gia_chang_3;
    if(30 < d)
        tien = gia_chang_1 + 9*gia_chang_2 + 20*gia_chang_3 + (d-30)*gia_chang_4;
    printf("%d", tien);
}