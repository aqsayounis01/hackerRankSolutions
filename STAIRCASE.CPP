#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<=0||n>100)
    {
        cout<<"Invalid Input";
    }
    else
    {
        for(int i=n;i>=1;i--)
        {
            for(int j=1;j<=i-1;j++)
            {
                cout<<" ";
            }
            for(int k=1;k<=n-(i-1);k++)
            {
                cout<<"#";
            }
            cout<<endl;
            
        }
    }
}