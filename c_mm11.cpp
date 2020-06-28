#include <iostream>  
#include <iomanip>    
  
using namespace std;    
    
int main()      
{      
    int inp;  
    while(cin >> inp)  
    {  
        int ten, five;  
        ten = inp / 10;  
        inp %= 10;  
        five = inp /5;  
        inp %= 5;  
  
        cout << "NT10=" << ten << endl << "NT5=" << five << endl << "NT1=" << inp << endl;  
    }  
    return 0;      
}  
