#include <iostream>  
#include <iomanip>    
  
using namespace std;    
    
int main()      
{      
    float x;  
    int test;  
    while(cin >> x )      
    {      
        x = x*1.6;  
        test = x*100;  
        if(test%10 >= 5)  
        {  
            test += 10;  
            x = test/100.0;  
        }  
        cout << fixed << setprecision(1) << x << endl;      
    }      
    return 0;      
}  
