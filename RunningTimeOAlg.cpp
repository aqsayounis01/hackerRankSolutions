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

//21312
    int count =0;
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int cur = a[i];
        while(j>=0 && cur<a[j])
        {
            a[j+1]=a[j];
            j--;
            count++;
        }
        a[j+1]=cur;
    }

    cout <<count;
}