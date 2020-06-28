#include <iostream>  
#include <iomanip>  
using namespace std;    
  
int main()      
{      
    int inp,sat,pl,rat;  
    while(cin >> inp )  
    {  
        sat = inp%10;  
        pl = (inp%100)/10;  
        rat = inp /100;  
        if(sat*sat*sat+pl*pl*pl+rat*rat*rat == inp) cout << "Yes\n";  
        else cout << "No\n";  
    }  
    return 0;      
}  
