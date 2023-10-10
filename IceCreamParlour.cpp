#include<iostream>
using namespace std;

int main()
{
    int t,l,n;
    cin>>t;
    for (int  j = 0; j < t; j++)
    {
        cin>>l;
        cin>>n;
        int a[n];
        for (int  i = 0; i < n; i++)
        {
            cin>>a[i];
        }


        for (int  i = 0; i < n; i++)
        {
            for (int  k = 0; k < n; k++)
            {
               if (l==a[i]+a[k] && i!=k)
            {
                cout<<i+1<<" "<<k+1<<endl;
               goto s;
            }
           
            }
               
        }
        s:
        ;
    }
    
}