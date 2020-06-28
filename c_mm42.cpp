#include <iostream>  
#include <iomanip>  
using namespace std;  
  
int main()       
{       
    int inp,i;       
    while(cin >> inp)       
    {     
        float sum=0,temp,sq,eq;    
        if(inp<=15)    
        {    
            for(i=1;i<=inp;i++)    
            {    
                sq = -1;    
                eq = 1/((2.0*i)-1);    
                if( (i+1)%2 == 0 ) sq = 1;    
                temp = sq*eq;    
                sum+= temp;    
            }  
            cout << fixed << setprecision(3) << sum << endl;    
        }    
    }       
    return 0;       
}  
