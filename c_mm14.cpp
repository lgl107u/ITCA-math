#include <iostream>  
#include <iomanip>    
  
using namespace std;    
    
int main()      
{      
    int inp;  
    while(cin >> inp)  
    {  
        int day,hr,mnt;    
        day = inp/86400;    
        inp %= 86400;    
        hr = inp/3600;    
        inp %= 3600;    
        mnt = inp/60;    
        inp %= 60;    
  
        cout << day << " days\n" << hr << " hours\n" << mnt << " minutes\n" << inp << " seconds\n";  
    }  
    return 0;      
}  
