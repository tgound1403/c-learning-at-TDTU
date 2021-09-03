//============================================================================
// Name        : maiantiem.c
// Author      : Nguyen Quoc Thuan
// Version     : 1.2
//============================================================================
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h> 
/**********************************************************************
 * Ham: read_File
 * Sinh vien can hoan chinh ham doc_File de thuc hien viec doc gia tri file input.inp
**********************************************************************/
int doc_File(int *hp, int *d, int *s, char t[])
{
	//sinh vien viet code de thuc hien viec doc cac gia tri tu file input.inp tai thu muc lam viec
	FILE *fo;
	fo = fopen("input.inp","r"); 
	fscanf(fo,"%d %d %d",&*hp, &*d, &*s);
	fscanf(fo,"%s",t);
	fclose(fo);
	if (((1<=*hp)&&(*hp<=999))&&((1<=*d)&&(*d<=1000))&&((1<=*s)&&(*s<=100))&&((strcmp(t,"Flood")==0)||(strcmp(t,"Storm")==0)||(strcmp(t,"Rain")==0)||(strcmp(t,"Shower")==0)||(strcmp(t,"Drizzle")==0)||(strcmp(t,"Cloudy")==0)))
	{
		return 0;
	}
}
/**********************************************************************
 * Ham: ghi_File
 * Sinh vien can hoan chinh ham ghi_file de thuc hien viec ghi ket qua p vao file output.out tai thu muc lam viec
**********************************************************************/
void ghi_File(float p)
{
	//sinh vien viet code de thuc hien viec ghi ket qua p vao file output.out tai thu muc lam viec
	FILE *fc; 
	fc = fopen("output.out","w"); 
	fprintf(fc,"%.3f",p);
	fclose(fc);  
}
/**********************************************************/
int prime(int *hp )//kiem tra hp co phai so nguyen to kh 
{
	int i,prime=0;
	for ( i=2; i<*hp; i++)
		if ( *hp%i == 0)
		{
			prime = 1;
			break;
		}
		else  prime = 0; 
	return prime;
}
int fibo(int x)
{
 	int a,b,c;
 	if((x==0)||(x==1))
   		return 0;
 	else
 	{
		a=0;
		b=1;
		c=a+b;
		while(c<x)
		{
			a=b;
			b=c;
			c=a+b;
		}
		if(c==x)
			return 0;
		else
			return 1;
 	}
 	return 0;
}
int triangular( int a ) //ap dung TH6 cua g 
{
    int sum=0;
    for (int i = 1; i<=a; i++)
        sum += i;
    return sum; 
}
void weather ( int *s, float *g, float *q, char t[])
{ 
	int r=*s%6; 
	switch(r)
			{
				case 0:
				{
					*g = (float)*s/2;
					if ( strcmp(t," Flood")==0)
						*q = -0.1;
					else if ( strcmp(t,"Storm")==0)
						*q = -0.05 ;
					else if ( strcmp(t,"Rain")==0)
						*q = 0;
					else if ( strcmp(t,"Shower")==0)
						*q = +0.05;
					else if ( strcmp(t,"Drizzle")==0)
						*q = +0.1;
					else if ( strcmp(t,"Cloudy")==0)
						*q = +0.15; 
					break; 
				} 

				case 1:
				{
					*g = 2**s;
					if ( strcmp(t,"Flood")==0)
						*q = -0.15;
					else if ( strcmp(t,"Storm")==0)
						*q = -0.1;
					else if ( strcmp(t,"Rain")==0)
						*q = -0.05;
					else if ( strcmp(t,"Shower")==0)
						*q = 0;
					else if ( strcmp(t,"Drizzle")==0)
						*q = +0.05;
					else if ( strcmp(t,"Cloudy")==0)
						*q = +0.1; 
					break; 
				}
				case 2:
				{
					*g = (float)-pow(*s%9,3)/5;
					if ( strcmp(t,"Flood")==0)
						*q = -0.2;
					else if ( strcmp(t,"Storm")==0)
						*q = -0.15;
					else if ( strcmp(t,"Rain")==0)
						*q = -0.1;
					else if ( strcmp(t,"Shower")==0)
						*q =  -0.05;
					else if ( strcmp(t,"Drizzle")==0)
						*q = 0;
					else if ( strcmp(t,"Cloudy")==0)
						*q = +0.05;
					break; 
 				}
				case 3:
				{
					*g = -pow(*s%30,2)+3**s;
					if ( strcmp(t,"Flood")==0)
						*q = -0.25;
					else if ( strcmp(t,"Storm")==0)
						*q = -0.2;
					else if ( strcmp(t,"Rain")==0)
						*q = -0.15;
					else if ( strcmp(t,"Shower")==0)
						*q = -0.1;
					else if ( strcmp(t,"Drizzle")==0)
						*q = -0.05;
					else if ( strcmp(t,"Cloudy")==0)
						*q = 0; 
					break;
				}
			 
				case 4:
				{
					*g = -*s;
					if ( strcmp(t,"Flood")==0)
						*q = -0.05;
					else if ( strcmp(t,"Storm")==0)
						*q = 0 ;
					else if ( strcmp(t,"Rain")==0)
						*q = +0.05;
					else if ( strcmp(t,"Shower")==0)
						*q = +0.1;
					else if ( strcmp(t,"Drizzle")==0)
						*q = +0.15;
					else if ( strcmp(t,"Cloudy")==0)
						*q = +0.2; 
					break; 
				}
				case 5:
				{
					*g = -triangular((*s%5)+5);
					if ( strcmp(t,"Flood")==0)
						*q = 0;
					if ( strcmp(t,"Storm")==0)
						*q = +0.05;
					if ( strcmp(t,"Rain")==0)
						*q = +0.1;
					if ( strcmp(t,"Shower")==0)
						*q = +0.15;
					if ( strcmp(t,"Drizzle")==0)
						*q = +0.2;
					if ( strcmp(t,"Cloudy")==0)
						*q = +0.25; 
					break; 
				}
			}
}
/**********************************************************************
 * Name: Main 
 * Target: Implements your application
 **********************************************************************/
int main() 
{
	int hp = 0, d = 0, s = 0;
	char t[10];
	float P1 = 0, P2 = 0, p = -1;
	float f=0; 
	float g=0,q=0,snake;
	if(doc_File(&hp, &d, &s, t)==0)
	{
		//sinh vien viet code thuc hien tinh theo yeu cau de bai
		//kiem tra hp de tinh P1, P2
		if (prime(&hp)==0)
		{ 
			P1 = 1000;
			P2 = (hp+s)%1000;
		}
		else 
		{
			P1 = hp; 
			P2 = (hp+d)%100;
		}
		snake = (float)(d + P1 + P2)/1000 ;//de danh cho TH3 
		//TH1
		if (d<200)
			f=0;
		int x = d + s ; //de kiem tra fibo7
		//TH2
		if (((200<=d)&&(d<=800))||((fibo(x)==0)&&(d<200)))
		{
			weather(&s,&g,&q,t);
			f = (float)((40 - (fabs(d-500)/20)+g)*(1 + q));
		}
		//TH3
		if ((200<=d)&&(d<300))
		{
			if (snake>0.8)
			{
				p = 0;
				ghi_File(p) ;
				return 0;
			}
			if ((0.6<snake)&&(snake<=0.8))
				hp -= 50;
			if ((0.4<snake)&&(snake<=0.6))
				hp -= 30;
			if ((0.2<snake)&&(snake<=0.4))
				hp -= 20;
			if (prime(&hp) == 0)
			{ 
				P1 = 1000;
				P2 = (hp+s)%1000;
			}
			else
			{
				P1 = hp; 
				P2 = (hp+d)%100;
			}
			weather(&s,&g,&q,t);
			f = (float)(40 - (fabs(d-500)/20)+g)*(1 + q);
		}
		if (d>800) //TH4
		{
			f = ((float)(-d*s)/1000);
		}
	p = (P1 + P2 * f)/(float)(1000 + fabs(P2*f));
	if (p<0)
		p = 0;
	if (p>1)
		p = 1; 
	}
	else p = -1;
	ghi_File(p) ;
	return 2020; 
}
