#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int c=0;
    int p=0;
    //find the elemwnt that is occuring the maximum no of times
    for(int i=0;i<v.size();i++)
    {
      p=c;
      c=0;
        for(int j=0;j<v.size();j++)
        { 
            if(v[i]==v[j] && i!=j)
            {
                c++;
            }
            
        }
        
        if(c<p)
        {
            c=p;
        }
       
    }
    
    cout<<v.size()-(c+1)<<endl;
}