#include <stdio.h>    
#include <string.h>    
#include <stdlib.h>    
    
int main(void)    
{    
    int input;    
    while(cin >> input)    
    {    
       if( (input%4==0 && input%100!=0) || input%400==0) cout << "Bissextile Year\n";  
       else cout << "Common Year\n";  
    }    
    return 0;    
}
