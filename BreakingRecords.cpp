#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    int h=0,l=0;
    int cl=0,ch=0;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            h=arr[0];
            l=arr[0];
        }
        else
        {
            if(h<arr[i])
            {
                h=arr[i];
                ch++;
               
            }
            else if(l>arr[i])
            {
                l=arr[i];
                cl++;
            }
        }
    }
    cout<<ch<<" "<<cl;
    
}
