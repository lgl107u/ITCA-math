#include <iostream>    
  
using namespace std;      
  
int mc(int inp)    
{    
    if(inp>100) return (inp-10);    
    else return(mc(mc(inp+11)));    
}    
  
int main()       
{       
    int idx,inp,otp;    
    cin >> idx;  
    if(idx<1 || idx>10) return 0;    
    for(int i=0; i<idx;i++)    
    {    
        cin >> inp;  
        otp = mc(inp);    
        cout << otp << endl;  
    }    
    return 0;       
}  
