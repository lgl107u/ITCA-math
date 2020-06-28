#include <iostream>  
using namespace std;    
int main()      
{      
    int x,y;  
    while(cin >> x >> y)  
    {  
        (x>100 || y>100) ? cout << "outside\n" : cout << "inside\n";  
    }  
    return 0;      
} 
