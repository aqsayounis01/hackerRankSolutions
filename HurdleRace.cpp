#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int h[n];
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    int max=h[0];
    for(int i=0;i<n-1;i++)
    {
        if(max<h[i+1])
        {
            max=h[i+1];
        }
    }
    int d=0;
    if(max>k)
    {
        d=max-k;
    }
    cout<<d;
    
    
}
