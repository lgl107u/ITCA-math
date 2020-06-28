#include <iostream>  
  
using namespace std;    
int main()      
{      
    int inp;  
    long long int sum;  
    while(cin >> inp)  
    {  
        sum = 1;  
        if(inp > 0 && inp < 20)  
        {  
            for(int i=1 ; i<=inp ; i++) sum *=i ;    
  
            cout << sum << endl;  
        }  
    }  
    return 0;      
} 
