#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    int k=0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]==i)
            {
                for(int l=0;l<n;l++)
                {
                    if(j+1==a[l])
                    {
                        b[k]=l+1;
                        k++;
                        break;
                    }
                }
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
    
    
}
