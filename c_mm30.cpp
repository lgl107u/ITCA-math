#include <iostream>  
#include <iomanip>  
using namespace std;    
  
int main()      
{      
    unsigned long long int x, y;  
    y = 1 << 31;  
    int i,flag;  
    while(cin >> x )  
    {  
        flag = 0;  
        if(x < y)  
        {  
            for(i=2; i<x ;i++)  
            {  
                if(x%i==0)  
                {  
                    flag =1;  
                    cout << "NO\n";  
                    break;  
                }  
            }  
            if(flag==0) cout << "YES\n";  
        }  
    }  
    return 0;      
}  
