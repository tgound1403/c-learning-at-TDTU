//tinh khoang cach giua hai diem 
#include <stdio.h>
#include <math.h>
void main ()
{
	float x1,x2,y1,y2;
	printf("nhap toa do diem A: ");
	scanf("%f %f", &x1, &y1);
	printf("nhap toa do diem B: ");
	scanf("%f %f", &x2, &y2);
	float khoangcach = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	printf("khoang cach 2 diem A va B la: %.2f ", khoangcach);
}
