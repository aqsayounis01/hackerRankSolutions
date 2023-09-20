#include<iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        
        int d,r,count=0;
        
    for(d=n;d>0;d=d/10)
    {
        r=d%10;
        
    
        if(r==0)
        {
            continue;
        }
        if(n%r ==0)
        {
            
            count++;

        }
    
        
    }
    cout<<count<<endl;
        
    }
    
}