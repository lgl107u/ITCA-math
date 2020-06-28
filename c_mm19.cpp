#include <iostream>  
#include <iomanip>  
using namespace std;    
int main()      
{      
    int inp;  
    while(cin >> inp)  
    {  
       double amt;  
       if(inp<=800) amt = (double)inp*0.9;    
       if(inp>800 && inp<1500) amt= ((double)inp*0.9)*0.9;    
       if(inp>=1500) amt = ((double)inp*0.9)*0.79;  
  
       cout << fixed << setprecision(1) << amt << endl;  
    }  
    return 0;      
} 
