#include<stdio.h>
#include<math.h>
struct tamgiac
{
    float a,b,c; //3 canh
    float alpha, beta, omega; //3 goc
} ; 
void nhapthongtin ( struct tamgiac tg[], int n)
{
    printf ("nhap vao 3 canh tam giac thu %d", i+1);
    scanf("%f %f %f", tg[i].a, tg[i].b, tg[i].c);
    printf ("nhap vao 3 goc tam giac thu %d", i+1);
    scanf("%f %f %f", tg[i].alpha, tg[i].beta, tg[i].omega);
}
void kiemtra  ( struct tamgiac tg[], int n)
{
    for (int i=0; i<n; i++)
    {
        if((tg[i].a+tg[i].b>tg[i].c)||(tg[i].alpha+tg[i].beta+tg[i].omega != 180))
        {
            printf("du lieu %d la mot tam giac");
        }
        else printf("du lieu %d khong phai tam giac", i+1);
    }
}
void tinhtoan ( struct tamgiac tg[], int n)
{
    float cv, dt; 
    float ncv=cv/2;
    for (int i=0; i<n;i++)
    {
    cv = tg[i].a+tg[i].b+tg[i].c;
    printf("chu vi tam giac thu %d la ", i+!);
    dt = (1/4)*sqrt(ncv*{ncv-tg[i].a}*(ncv-tg[i].b)*(ncv-tg[i].c));
    printf("dien tich tam giac thu %d la ". i+1);
    }
}
void phanloai( struct tamgiac tg[], int n)
{
    int can=0;
    for (int i=0; i<n; i++)
    {
        if ((tg[i].a==tg[i].b)||(tg[i].b==tg[i].c)||(tg[i].a==tg[i].c))
        {
            printf(" tam giac %d la tam giac can", i+1);
            can = 1;
        }
        if ((can==1)&&((tg[i].alpha=90)||(tg[i].beta==90)||(tg[i].omega==90)))
            printf("tam giac vuong can");
        else if ((tg[i].a==tg[i].b)&&(tg[i]b==tg[i].c)&&(tg[i].a==tg[i].c))
            printf(" tam giac %d la tam giac deu", i+1);
        else if ( (pow(tg[i].a,2)+pow(tg[i].b,2)==pow(tg[i].c,2)) || 
                  (pow(tg[i].a,2)+pow(tg[i].c,2)==pow(tg[i].b,2)) ||
                  (pow(tg[i].b,2)+pow(tg[i].c,2)==pow(tg[i].a,2)) ) 
                    printf("tam giac %d la tam giac vuong", i+1);
    }
}
int main ()
{
    struct tamgiac tg[100];
    int n;
    printf("nhap so luong tam giac: ");
    scanf("%d",&n);
    nhapthongtin(tg,n);
    kiemtra(tg,n);
    tinhtoan(tg,n);
    phanloai(tg,n);
    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                