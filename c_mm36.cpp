#include <stdio.h>    
#include <string.h>    
#include <stdlib.h>    
    
int main(void)    
{    
    int input;    
    while(cin >> input )    
    {    
        if ( input>=3 && input<=5 ) cout <<"Spring\n";  
        else if ( input>=6 && input<=8 ) cout << "Summer\n";  
        else if ( input>=9 && input<=11 ) cout <<"Autumn\n";  
        else if ( input=12 || (input<=2 && input>=1) ) cout << "Winter\n";  
    }    
    return 0;    
}
