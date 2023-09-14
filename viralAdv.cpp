#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int  l=0,t=0,s=0;
    s=5;
    for(int i=1;i<=n;i++)
    {
        l=floor(s/2);  
        
        s=l*3;
       
        t+=l;  
        
        
    }
    cout<<t<<endl;
}