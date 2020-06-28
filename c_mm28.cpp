#include <iostream>    
using namespace std;      
  
int main()        
{        
    int inp;  
    while(cin >> inp)    
    {    
        for(int i=35; i<=inp ; i+=35)  
        {  
            cout << i;  
            if(i+35 < inp) cout << ' ';  
        }  
        cout << endl;  
    }    
    return 0;        
}  
