#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int  k,n,m;
    cin>>k>>n>>m;
    vector<int>v1;
    vector<int>v2;
    vector<int>t;
    for(int i=0;i<n;i++)
    {
        int a ;
        cin>>a;
       v1.push_back(a);
    }
    for(int i=0;i<m;i++)
    {
        int a ;
        cin>>a;
       v2.push_back(a);
    }
    
   
    
    int  temp;
    int   cnt=0;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            temp=v1[i]+v2[j];
            if(temp<=k)
            {
                // cout<<i<<j<<" "<<endl;
                flag=true;
                // cout<<i<<j<<endl;
                  
                    t.push_back(temp);
                cnt++;
                
            }
            
        }
    }
    for(int i=0;i<t.size();i++)
    {
        // cout<<t[i]<<endl;
    }
    if (flag==false)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    
    int max;
   sort(t.begin(),t.end());
   max=t[t.size()-1];
   cout<<max;
    

}