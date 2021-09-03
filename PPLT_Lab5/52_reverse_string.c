#include<stdio.h> 
#include<string.h> 
void main () 
{ 
    char ht[50];
    printf("What's your name: "); 
    fgets(ht,50,stdin);
    int i;
    printf("\n Reverse your name: ");
    for ( i=strlen(ht); i>=0; i--)
    {
        printf("%c",ht[i]);
    }    
}