#include<iostream>
using namespace std;
void bonAppetit(int bill[],int k,int b,int n)

{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i==k)
        {
            continue;
        }
        sum+=bill[i];
    }
    sum=sum/2;
    int ret=0;
    if(sum==b)
    {
        cout<<"Bon Appetit";
    }
    else
    {
    ret=b-sum;
    cout<<ret;
    }
}
int main()
{
    int n,k,b;
    cin>>n>>k;
    int bill[n];
    for(int i=0;i<n;i++)
    {
        cin>>bill[i];
    }
    cin>>b;
    bonAppetit(bill,k,b,n);
    
}