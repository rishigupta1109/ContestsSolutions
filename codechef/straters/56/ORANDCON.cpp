#include <iostream>
#include<math.h>
using namespace std;

int main() {
int test,x,i,j;
cin>>test;
while(test--)
{
    cin>>x;
   
    for(i=x+1;i<pow(10,9);i++)
    {
       
           if((i&x)==x)
           {
              
               break;
           }
      
    }
   cout<<x<<" 0 "<<i<<endl;
 

    
}
	return 0;
}
