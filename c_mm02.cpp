#include <iostream>  
#include <iomanip>  
using namespace std;  
  
int main()    
{    
    int x,y;    
    float area;    
    while(cin >> x >> y)    
    {    
        area = (x*y)/2.0;  
        cout << fixed << setprecision(1) << area << endl;    
    }    
    return 0;    
}  
