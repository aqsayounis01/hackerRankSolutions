#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int cur = a[i];
        while(j>=0 && a[j]>cur)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=cur;
        for(int k=0;k<n;k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }

}