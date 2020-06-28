#include <iostream>    
  
using namespace std;      
  
int main(void)       
{       
    int idx,inp,cnt,mltpl,i;    
    cin >> idx;  
    if(idx>10 || idx<1 ) return 0;    
    for(i=0; i<idx;i++)    
    {    
        mltpl = 1;    
        cin >> inp;  
        for(cnt = 1 ; (mltpl%=inp)!= 0 ; cnt++) mltpl = mltpl*10+1;    
        cout << cnt << endl;  
    }    
    return 0;       
}  
