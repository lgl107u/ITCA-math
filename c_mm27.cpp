#include <iostream>  
#include <iomanip>  
using namespace std;    
  
int main()      
{      
    int x,y, temp;    
    
    while(cin >> x >> y)    
    {    
        if(x<y)    
        {    
            temp = x;    
            x = y;    
            y =temp;    
        }    
        float result = (x+y)*(x-y+1)/2.0;    
        cout << fixed << setprecision(0) << result << endl;  
    }    
    return 0;   
}  
