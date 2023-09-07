#include<iostream>
#include<cmath>
using namespace std;

int main()
{
     int  x,y,z,q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x>>y>>z;
        if(abs(z-x) < abs(z-y))
        {
            cout<<"Cat A\n";
        
            
        }
        else if(abs(z-x) > abs(z-y))
        {
            cout<<"Cat B\n";
           
            
        }
        else if(abs(z-x)==abs(z-y))
        {
            cout<<"Mouse C\n";
            
        }
        
    }
}
