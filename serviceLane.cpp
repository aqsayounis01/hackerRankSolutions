#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    vector<int>v;
    for (int  i = 0; i <n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    
    
    for (int  i = 0; i < t; i++)
    {
        int b,c;
        cin>>b>>c;
        int min=0;
        min=v[b];
        for (int  j=b; j<c; j++)
        {
            
            if (min>v[j+1])
            {
                min=v[j+1];
                cout<<min<<endl;
            }
            
        }
        cout<<min<<endl;
        

    }
    
}