#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
vector<int> c;

    int n;
    cin>>n;
    int a[n];
    int min1=0;

    for (int  i = 0; i <n; i++)
    {
        cin>>a[i];
    }

    for (int  i = 0; i < n; i++)
    {   min1=0;
        for (int j = i+1; j<n; j++)
        {
            
                if (a[i]==a[j])
                {
                 min1=  abs(i-j);
                 c.push_back(min1);
                }
                
           
        }   
    }
    if(c.empty())
    {
        cout<<-1;
    }
    else{
        sort(c.begin(),c.end());
    cout<<c[0];
    
    }
    
}