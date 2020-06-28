#include <iostream>    
#include <iomanip>    
  
using namespace std;    
    
int main()      
{      
    int x,y,z;      
    float area;      
    while(cin >> x >> y >> z)      
    {      
        area = (x+y)*z/2.0;    
        cout << "Trapezoid area:";  
        cout << fixed << setprecision(1) << area << endl;      
    }      
    return 0;      
}
