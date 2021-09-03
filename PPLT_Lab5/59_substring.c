#include<stdio.h> 
#include<string.h> 
#define size 50
void main () 
{
    char str[size*2], w[size];
    printf("input string: ");
    fgets(str,size,stdin);
    printf("input a word: ");
    fgets(w,size,stdin);
    int b,i,j;
    if ( strlen(w) <= strlen(str))
        for ( i=0; i< strlen(str)-strlen(w)-1; i++ ) 
        {
            for ( j=0; j<strlen(w)-1;j++)
            {
                if (str[i+j] !=w[j])
                {
                    b=0;
                    break;
                }
                else
                {
                    b=1;
                }
            }
            if (b==1) break;
        }
    if (b==1) 
        printf("%d",i+1);
    else printf("NO");
}