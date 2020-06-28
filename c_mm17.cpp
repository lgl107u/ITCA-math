#include <iostream>    
using namespace std;      
  
int main()        
{        
    int x,y,great, temp;    
    while(cin >> x >> y)    
    {    
        great = 0;    
        if(x<y)    
        {    
            temp = x;  
            x = y;    
            y = temp;    
        }  
        for(int i=1 ; i<=y ; i++)    
        {    
            if(x%i==0 && y%i==0) great=i;    
        }    
        cout << great << endl;    
    }    
    return 0;        
}  
