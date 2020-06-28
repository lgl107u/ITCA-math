#include <iostream>  
#include <iomanip>    
  
using namespace std;    
    
int main()      
{      
    int hr1, hr2, mn1, mn2, sum_mn , amt ,rem;  
    while(cin >> hr1 >> mn1 >> hr2 >> mn2)  
    {  
        sum_mn = (mn2-mn1)+(hr2-hr1)*60;  
        rem = sum_mn/30;  
        if(rem<=4 ) amt = rem*30;  
        if(rem>=5 && rem<=8) amt=4*30+(rem-4)*40;    
        if(rem>=9) amt=4*30+4*40+(rem-8)*60;  
  
        cout << amt << endl;  
    }  
    return 0;      
}  
