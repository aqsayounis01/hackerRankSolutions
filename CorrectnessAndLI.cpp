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

int j=0,cur=0;
    for(int i=1;i<n;i++)
    {
     j=i-1;         //sorted
     cur=a[i];      //unsorted
     while (j>=0 && cur<a[j] )
     {
        a[j+1]=a[j];   
        j--;
     }
        a[j+1]=cur;  
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}