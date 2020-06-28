#include <iostream>  
#include <iomanip>    
  
using namespace std;    
    
int main()      
{      
    float inp;  
    while(cin >> inp)  
    {  
        int sec=0;  
        float frsp= 0.762 , mesp = 0;  
        while(inp > mesp)  
        {  
            inp += frsp;  
            mesp += 1;  
            sec++;  
        }  
        cout << sec << endl;  
  
    }  
    return 0;      
}  
