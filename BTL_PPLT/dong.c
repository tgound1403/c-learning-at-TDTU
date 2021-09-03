//============================================================================
// Name        : maiantiem.c
// Author      : Tran Minh Phuc
// Version     : 1.6
//============================================================================
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
int doc_File(int *hp, int *d, int *s, char t[])
{
	FILE *input;
	input=fopen("input.inp","r");
	fscanf(stdin,"%d %d %d %s",&*hp,&*d,&*s,t);
	char F[]="Flood";
		char St[]="Storm";
		char R[]="Rain";
		char Sh[]="Shower";
		char D[]="Drizzle";
		char C[]="Cloudy";
			
		if(((*hp>=1) && (*hp<=999) && (*d>=1) && (*d<=1000) && (*s>=1) && (*s<=100) && (strcmp(t,C)==0) || (strcmp(t,R)==0) || (strcmp(t,F)==0) || (strcmp(t,D)==0) || (strcmp(t,Sh)==0) || (strcmp(t,St)==0) ))
		{
			return 1;//truonghopdung
		}
		else
		{
			return -1;//truonghopsai
		}
}
void ghi_File(float p)
{
	FILE *output;
	output=fopen("output.out","w");
	fprintf(stdout,"p=%.3g",p);
	if(p<0)  
		{
			fprintf(stdout,"p=0");
		}
	if(p>1)  
		{
			fprintf(stdout,"p=1");
		}
	if(p<0 && p>1)
	{
		fprintf(stdout,"%.3g",p);
	}
	
}

int snt(int hp);
float pt(char t[],int s);
int Fibonacci(int d,int s);
int triangular(int n);
int main()
{
	int hp=0,d=0,s=0,i=2,n,hpgiam;
	char t[100];
	float j;
	int m;
	int temp1,temp2,temp3;
	float p=-1,p1=0,p2=0,xs,gs,f;
	if(doc_File(&hp,&d,&s,t))
	{
		snt(hp);
		Fibonacci(d,s);
		triangular(n);
		pt(t,s);
		
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
				ghi_File(p);
				return 0;
			}
			else if((xs<=0.8 && xs>0) && (d>=200 && d<=800)) //gia dinh An Tiem khong bi tu vong
			{
				if(xs>0.6 && xs<=0.8)
				{
					hpgiam=hp-50;
				}
				if(xs>0.4 && xs<=0.6)
				{
					hpgiam=hp-30;
				}
				if(xs>0.2 && xs<=0.4)
				{
					hpgiam=hp-20;
				}
				if(xs>0 && xs<=0.2)
				{
					hpgiam=hp;
				}
				if(snt(hp)==1)
				{
					p1=1000;
					p2=(hpgiam+s)%1000;
				}
				else
				{
					p1=hpgiam;
					p2=(hpgiam+d)%100;
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
		ghi_File(p);
		return 2020;
	}
}

	int snt(int hp) //ham tim so nguyen to
	{
		int i=2;
		while(hp%i!=0)
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
		if(d+s<1)
		{
			return 0;
		}
		if(d+s==1)
		{
			return temp3;
		}
			while(temp3<d+s)
				{
				   temp1=temp2;
				   temp2=temp3;
				   temp3=temp1+temp2;
				   if(d+s==temp3)
				   {
					   return temp3;
				   }
				}
		return 0;
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