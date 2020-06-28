#include <iostream>  
#include <iomanip>    
  
using namespace std;    
    
int main()      
{      
    float inp;  
    while(cin >> inp)  
    {  
        cout << fixed << setprecision(1) << (inp*9/5)+32 << endl;  
    }  
    return 0;      
}  
