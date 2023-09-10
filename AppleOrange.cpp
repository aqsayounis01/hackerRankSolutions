
#include<iostream>
using namespace std;

int main()
{
    int s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    int arr1[m],arr2[n];   //distances
    
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    
    int c1=0,c2=0;
    for(int i=0;i<m;i++)
    {
        if((a+arr1[i])<=t && (a+arr1[i])>=s)
        {
            c1++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if((b+arr2[i])<=t && (b+arr2[i])>=s)
        {
            c2++;
        }
    }
    
    cout<<c1<<endl<<c2;
}