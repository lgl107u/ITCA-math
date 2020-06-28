#include <iostream>  
using namespace std;    
int main()      
{      
    int inp;  
    while(cin >> inp)  
    {  
        for(int i=7 ; i>=0 ; i--)  
        {  
            int right = inp >> i;  
            (right&1) ? cout << "1" : cout << "0";  
        }  
        cout << endl;  
    }  
    return 0;      
}  
