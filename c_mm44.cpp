#include <iostream>    
#include <cstdio>  
#include <cstring>  
  
using namespace std;      
  
int main(void)       
{       
    int n,m,cnt;    
    
    while( cin >> n >> m)  
    {    
        char x[10],y[10];    
        cnt =0;    
        std::sprintf(x,"%d",n);  
        std::sprintf(y,"%d",m);  
        if( (n>=10 && n<=99) && (m>=1000000 && m<=9999999) )    
        {    
            char *ptr = x,*qtr=y;    
            while(*qtr != '\0')    
            {    
                ptr = strstr(qtr,x);    
                if(ptr==NULL) break;                    
                if(ptr)    
                {    
                    cnt++;    
                }    
                qtr = ptr;    
                qtr++;    
            }  
            cout << cnt << endl;    
        }    
    }    
    return 0;       
}  
