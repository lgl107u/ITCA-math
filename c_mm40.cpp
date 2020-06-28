#include <iostream>  
#include <iomanip>  
using namespace std;  
  
int main(void)       
{       
    int inp;       
    while(cin >> inp)       
    {     
        if(inp<100 && inp>0)    
        {    
            int i,sum=0;    
            for(i=1;i<=inp;i++)    
            {    
                sum+=i;    
                cout << i;  
                if(i<inp) cout << " + " ;  
            }    
            cout << " = " << sum << endl;  
        }    
    }       
    return 0;       
}  
