#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        v.push_back(a);
    }
    int c=0;
    for (int  i = 0; i < v.size(); i++)
    {
        c=0;
        for(int j=0;j<v[i].size();j++)
        {

            if(v[i][j]==v[i][j+1])
            {
                // cout<<"v[i][j]="<<v[i][j]<<endl;
                v[i].erase(j,1);
                c++;
                // cout<<v[i]<<endl;;
                j--;
                
            }
            
        }
        cout<<c<<endl;
    }
    
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<endl;
    // }
}