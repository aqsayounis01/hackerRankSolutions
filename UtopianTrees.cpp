#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    
    int h=1;
    
    
    //doubes and grows 1m
    for(int i=0;i<t;i++)
    {
        h=1;
        cin>>n;
        if(n==0)
    {
        cout<<h<<endl;
        continue ;
    }
    
        for(int j=0;j<n;j++)
        {
            
            if(j%2 ==0)
            {
                h=h*2;
            }
            else if(j%2 !=0)
            {
                h=h+1;
            }
        }
        cout<<h<<endl;
       
    }
}