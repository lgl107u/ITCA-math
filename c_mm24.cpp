#include <iostream>  
#include <iomanip>  
  
using namespace std;    
  
int main()      
{      
    int tm,hr;     
    while(cin >> tm >> hr)        
    {        
       double amt =0.0;    
       if(tm<=60) amt =tm*hr;    
       if(tm>60&&tm<=120) amt = 60*hr+(tm-60)*1.33*hr;    
       if(tm>120) amt = 60*hr+60*1.33*hr+(tm-120)*1.66*hr;    
       cout << fixed << setprecision(1) << amt << endl;  
    }       
    return 0;      
} 
