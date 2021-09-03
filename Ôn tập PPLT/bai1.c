#include <stdio.h> 
void main () 
{
    int gio, tc, tien; 
    printf("nhap vao so gio lam viec va so tien tieu chuan: ");
    scanf("%d %d", &gio, &tc);
    if(gio <= 40)
        tien = gio*tc;
    if( 41<= gio <= 45)
        tien = 40*tc + (gio-40)*tc*1.8;
    if( 46<= gio < 50)
        tien = 40*tc + 5*tc*1.8 + (gio-45)*tc*2.5;
    if( 50<=gio)
        tien = 40*tc + 5*tc*1.8 + 5*tc*2.5 + (gio-50)*tc*2.6;
    printf("tong so tien thu nhap duoc la: %d ",tien);
}