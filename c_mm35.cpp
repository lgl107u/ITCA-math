#include <stdio.h>    
#include <string.h>    
#include <stdlib.h>    
    
int main(void)    
{    
    int input;    
    while(scanf("%d",&input)!=EOF)    
    {    
       if( (input%4==0 && input%100!=0) || input%400==0) printf("Bissextile Year\n");  
       else printf("Common Year\n");  
    }    
    return 0;    
}
