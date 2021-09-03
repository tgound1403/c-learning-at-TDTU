#include<stdio.h> 
#include<math.h>
void main () 
{
    float a,b,c ; 
    printf("nhap vao so do 3 canh: ");
    scanf(" %f %f %f", &a, &b, &c );
    if ((a+b<=c)||(a+c<=b)||(b+c<=a))
        printf("khong phai tam giac");
    else
    {
        float p= a+b+c;
        printf("chu vi tam giac do la: %.2f\n ",p);
        float S= sqrt((p/2)*((p/2)-a)*((p/2)-b)*((p/2)-c));
        printf("dien tich tam giac do la: %.2f\n ", S); 
        if ((a==b)&&(a==c)&&(b==c))
        {
            printf("tam giac deu");
        }
        if ((a==b)||(a==c)||(b==c))
        {
            printf("tam giac can");
        }
        else printf("tam giac thuong");

    }
}