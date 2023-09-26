#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t ;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        int a[n];
        int count=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]<=0)
            {
                count++;
            }
        }
        if(count>=k)
        {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
        
    }
    
}