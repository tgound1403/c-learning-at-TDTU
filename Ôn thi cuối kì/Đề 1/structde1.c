#include<stdio.h>
#include<string.h>
struct sinhvien
{
    char ten[20];
    char mssv[10];
    int namsinh;
    float diemtb;
    int ngaynghi;
} ;
void nhapthongtin (struct sinhvien sv[], int n)
{
    for ( int i=0; i<3; i++ )//nhap thong tin vao struct 
    {
        fflush(stdin);
        printf(" nhap ten sinh vien thu %d ", i+1);
        fgets(sv[i].ten,100,stdin);
        printf(" nhap mssv sinh vien thu %d ", i+1);
        scanf("%s", &sv[i].mssv);
        printf(" nhap nam sinh sinh vien thu %d ", i+1);
        scanf("%d", &sv[i].namsinh);
        printf(" nhap diem tb sinh vien thu %d ", i+1);
        scanf("%f", &sv[i].diemtb);
        printf(" nhap so ngay nghi sinh vien thu %d ", i+1);
        scanf("%d", &sv[i].ngaynghi);
    }
}
void hoctap (struct sinhvien sv[], int n)
{
    for (int i=0; i<3;i++)//kiem tra diem khen thuong 
        if (sv[i].diemtb>=7.0) printf("%s duoc khen thuong\n", sv[i].ten);
}
void chuyencan (struct sinhvien sv[], int n)
{
    for (int i=0; i<3;i++)//kiem tra diem khen thuong 
        if (sv[i].ngaynghi>3) printf("%s bi nhac nho\n", sv[i].ten);
}
int main ()
{
    int n;
    struct sinhvien sv[3];
    printf("nhap so luong sinh vien: ");
    scanf("%d", &n);
    nhapthongtin(sv,n);
    hoctap(sv,n);
    chuyencan(sv,n);
    return 0;
}
