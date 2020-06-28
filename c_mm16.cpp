#include <iostream>  
using namespace std;    
int main()      
{      
    int x,y;  
    while(cin >> x >> y)  
    {  
        (x>=200 || y>=200) ? cout << "outside\n" : cout << "inside\n";  
    }  
    return 0;      
}  
