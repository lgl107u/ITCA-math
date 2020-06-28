#include <iostream>  
  
using namespace std;    
  
int main()      
{      
    int inp;  
    while(cin >> inp)  
    {  
        int cnt =0;  
        for(int i=3; i<=inp ; i+=3) cnt+=i;  
        cout << cnt << endl;  
    }  
    return 0;      
}  
