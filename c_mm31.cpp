#include <iostream>  
#include <iomanip>  
using namespace std;    
  
int main()      
{      
    int inp;  
    while(cin >> inp )  
    {  
        int result = 0;  
        for(int i=1; i<=inp ; i++)   
        {  
            if(i%3==0 && i%2==0 && i%12!=0) result += i;  
        }  
        cout << result << endl;  
    }  
    return 0;      
}  
