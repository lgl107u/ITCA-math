#include <iostream>  
#include <iomanip>  
using namespace std;    
  
int main()      
{      
    int input,i;    
    while(cin >> input)    
    {    
       for(i=1; i<=input ; i++)  
       {  
           if(input%i==0) cout << i;  
           if(i!=input && input%i==0) cout << " ";  
       }  
       cout << endl;  
    }    
  
    return 0;      
}  
