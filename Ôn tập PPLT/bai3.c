#include<stdio.h>
#include<math.h>
void main () 
{
    float xA,yA,xO,yO,r;
    printf("nhap vao toa do tam O: ");
    scanf("%d %d", &xO, &yO);
    printf("nhap vao ban kinh R cua duong tron tam O: ");
    scanf("%d", &r);
    printf("nhap vao toa do diem A: ");
    scanf("%d %d", &xA, &yA);
    float OA = sqrt(pow((xA-xO),2)+pow((yA-yO),2));
    if (OA == r)
        printf("diem A nam tren duong tron");
    if (OA < r)
        printf("diem A nam trong duong tron");
    if (OA > r)
        printf("diem A nam ngoai duong tron");
}