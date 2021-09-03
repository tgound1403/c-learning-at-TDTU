#include<stdio.h>
#include<string.h>
typedef struct
{
    int ngay,thang,nam;
}date;
struct nhanvien 
{
    char ten[50];
    char manv[10];
    date ngaysinh;
    date ngayvaolam;
};
void nhapthongtin (struct nhanvien nv[], int n)
{
    for (int i=0; i<n; i++)
    {
        fflush(stdin);
        printf("nhap ten nv thu %d: ", i+1);
        fgets(nv[i].ten,50,stdin);
        printf("nhap ma nv thu %d: ", i+1);
        scanf("%s", nv[i].manv);
        printf("nhap ngay thang nam sinh nv thu %d: ",i+1);
        scanf("%d %d %d",&nv[i].ngaysinh.ngay, &nv[i].ngaysinh.thang, &nv[i].ngaysinh.nam);
        printf("nhap ngay vao lam nv thu %d: ",i+1);
        scanf("%d %d %d",&nv[i].ngayvaolam.ngay, &nv[i].ngayvaolam.thang, &nv[i].ngayvaolam.nam);
    }
}
void khenthuong (struct nhanvien nv[], int n)
{
    for ( int i=0; i<n;i++)
        if ( 2018-nv[i].ngayvaolam.nam >=5) printf("khen thuong nhan vien %s", nv[i].ten);
}
int main ()
{
    struct nhanvien nv[100];
    int n;
    printf("nhap so luong nhan vien: ");
    scanf("%d", &n);
    nhapthongtin(nv,n);
    khenthuong(nv,n);
    return 0;
}