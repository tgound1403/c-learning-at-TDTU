#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include<stdlib.h>
int snt(int hp);
float pt(char t[],int s);
int Fibonacci(int d,int s);
int triangular(int n);
int main()
{
	int hp,d,s,i=2,n,temp;
	char t[10];
	float j;
	int m;
	int temp1,temp2,temp3;
	float p,p1,p2,xs,gs,f;
	printf("nhap chi so suc khoe hp:");
	scanf("%d",&hp);
	
	printf("nhap khoang cach tu nha den noi trong trot d:");
	scanf("%d",&d);
	
	
	printf("nhap hat giong ma mai an tiem trong s:");
	scanf("%d",&s);
	
	printf("nhap vao thoi tiet:");
	scanf("%s",&t);
	
	snt(hp);
	Fibonacci(d,s);
	triangular(n);
	pt(t,s);
	temp = hp;
	if(snt(hp)==1)
	{ 
		p1=1000;
		p2=(hp+s)%1000;
	}
	if(snt(hp)==0)
	{
		p1=hp;
		p2=(hp+d)%100;
	}
	
	if(d<200) //TH1
	{
		f=0;
	}
	if((d<200 && (Fibonacci(d,s)==d+s)) || (d>=200 && d<=800)) //TH2
	{
		if(s%6==0)  
		{
			gs=s/2;
		}
		if(s%6==1)  
		{
			gs=2*s;
		}
		if(s%6==2)  
		{
			gs=-pow(s%9,3)/5;
		}
		if(s%6==3)  
		{
			gs=-pow(s%30,2)+3*s;
		}
		if(s%6==4)  
		{
			gs=-s;
		}
		if(s%6==5)  
		{
			gs=-triangular((s%5)+5);
		}
		f=(float)(40-((fabs(d-500))/20)+gs)*(1+pt(t,s));
	}	
	
	if( d>=200 && d<300)//TH3
	{
		xs=(d+p1+p2)/1000;
		if(xs >0.8)
		{
			p=0;			//gia dinh An Tiem tu vong
		}
		if((xs<=0.8) && (d>=200 && d<=800)) //gia dinh An Tiem khong bi tu vong
		{
			if(xs>0.6)
			{
				hp=hp-50;
			}
			if(xs>0.4)
			{
				hp=hp-30;
			}
			if(xs>0.2)
			{
				hp=hp-20;
			}
			if(snt(temp)==1)
			{
				p1=1000;
				p2=(hp+d)%1000;
			}
			else
			{
				p1=hp;
				p2=(hp+d)%100;
			}
		}
		
	}
	if(d>800) //TH4
	{
		f=(float)(-d*s)/1000;
		
	}
	p=(p1+p2*f)/(1000+fabs(p2*f));
	if(p<0)  
	{
		p=0;
	}
	if(p>1)  
	{
		p=1;
	}
	printf("%.3f",p);
	return 0;
}

int snt(int hp) //ham tim so nguyen to
{
	int i;
	while(hp%i==0)
		{
			i++;
		} //dung de xac dinh so nguyen to
		
		if(i==hp) //truong hop hp la so nguyen to
		{
			return 1;
		}
		return 0;
}

int Fibonacci(int d,int s) //ham tim checkfibonacci 
{
	int temp1=0,temp2=1,temp3;
	temp3=temp1+1;
	    while(temp3<d+s)
	        {
		       temp1=temp2;
		       temp2=temp3;
		       temp3=temp1+temp2;
	        }
	return temp3;
}

int triangular(int n)
{
	int k,T=0;
	for(k=1;k<=n;k++)
	{
		T=T+k;
	}return T;
}


float pt(char t[],int s)
{
	float j;
	int m;
	m=s%6;
	char F[]="Flood";
	char St[]="Storm";
	char R[]="Rain";
	char Sh[]="Shower";
	char D[]="Drizzle";
	char C[]="Cloudy";
	
	
	switch(m)
	{
		case 5: //s%6=5(dua)
		{
			if(strcmp(t,F)==0)
			{
				j=0;
			}
			if(strcmp(t,St)==0)
			{
				j=0.05;
			}
			if(strcmp(t,R)==0)
			{
				j=0.1;
			}
			if(strcmp(t,Sh)==0)
			{
				j=0.15;
			}
			if(strcmp(t,D)==0)
			{
				j=0.2;
			}
			if(strcmp(t,C)==0)
			{
				j=0.25;
			}break;
		}
		
		case 4: //s%6=4(mit)
		{
			if(strcmp(t,F)==0)
			{
				j=-0.05;
			}
			if(strcmp(t,St)==0)
			{
				j=0;
			}
			if(strcmp(t,R)==0)
			{
				j=0.05;
			}
			if(strcmp(t,Sh)==0)
			{
				j=0.1;
			}
			if(strcmp(t,D)==0)
			{
				j=0.15;
			}
			if(strcmp(t,C)==0)
			{
				j=0.2;
			}break;
		}
		
		case 0: //s%6=0(dua hau)
		{
			if(strcmp(t,F)==0)
			{
				j=-0.1;
			}
			if(strcmp(t,St)==0)
			{
				j=-0.05;
			}
			if(strcmp(t,R)==0)
			{
				j=0;
			}
			if(strcmp(t,Sh)==0)
			{
				j=0.05;
			}
			if(strcmp(t,D)==0)
			{
				j=0.1;
			}
			if(strcmp(t,C)==0)
			{
				j=0.15;
			}break;
		}
		
		case 1: //s%6=1(oi)
		{
			if(strcmp(t,F)==0)
			{
				j=-0.15;
			}
			if(strcmp(t,St)==0)
			{
				j=-0.1;
			}
			if(strcmp(t,R)==0)
			{
				j=-0.05;
			}
			if(strcmp(t,Sh)==0)
			{
				j=0;
			}
			if(strcmp(t,D)==0)
			{
				j=0.05;
			}
			if(strcmp(t,C)==0)
			{
				j=0.1;
			}break;
		}
		
		case 2: //s%6=2(xoai)
		{
			if(strcmp(t,F)==0)
			{
				j=-0.2;
			}
			if(strcmp(t,St)==0)
			{
				j=-0.15;
			}
			if(strcmp(t,R)==0)
			{
				j=-0.1;
			}
			if(strcmp(t,Sh)==0)
			{
				j=-0.05;
			}
			if(strcmp(t,D)==0)
			{
				j=0;
			}
			if(strcmp(t,C)==0)
			{
				j=0.05;
			}break;
		}
			
		case 3: //s%6=3(dudu)
		{
			if(strcmp(t,F)==0)
			{
				j=-0.25;
			}
			if(strcmp(t,St)==0)
			{
				j=-0.2;
			}
			if(strcmp(t,R)==0)
			{
				j=-0.15;
			}
			if(strcmp(t,Sh)==0)
			{
				j=-0.1;
			}
			if(strcmp(t,D)==0)
			{
				j=-0.05;
			}
			if(strcmp(t,C)==0)
			{
				j=0;
			}break;	
		}
    }
}