#include<stdio.h>
int kiemtra ( tien, gia ) 
{
    int du; 
    if ( tien < gia )
        printf("khong du tien");
    else
    { 
        int du = tien - gia;
        printf("tien du: %d ", du);
    }
    return du;
} 
int main () 
{
    int tien, so, gia; 
    printf("tien xu bo vao may: ");
    scanf("%d", &tien);
    printf("nhan nut so: ");
    scanf("%d", &so);
    switch (so)
    {
    case 1: 
        printf("Pepsi\n");
        gia = 6000;
        kiemtra(tien, gia);
        break;
    case 2: 
        printf("Tra xanh\n");
        gia = 7000;
        kiemtra(tien, gia);
        break;
    case 3: 
        printf("Sting\n");
        gia = 8000;
        kiemtra(tien, gia);
        break;
    case 4: 
        printf("Sua tuoi\n");
        gia = 6000;
        kiemtra(tien, gia);
        break;
    case 5: 
        printf("Nuoc suoi");
        gia = 4000;
        kiemtra(tien, gia);
        break;
    default:
        printf("Error");
    }
}