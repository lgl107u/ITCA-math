#include <iostream>  
  
using namespace std;    
  
int main()      
{      
    int inp,i,j;  
  
    while( cin >> inp)  
    {  
       inp--;  
       for(i=inp ; i>=0; i--)  
       {  
           for( j=2 ; j<i ; j++)  
           {  
               if(i%j==0) break;   
           }  
           if(j==i) break;  
       }  
       cout << i << endl;  
    }  
    return 0;      
}  
