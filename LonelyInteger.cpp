#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
   vector <int>a;
    for(int i=0;i<n;i++)
    {
       int v;
       cin>>v;
       a.push_back(v);
    }
//eg 112

    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a.size();j++)
        {
            if(n==1)
            {
                cout<<a[i];
                return 0;
            }
            if(j!=i)
            {

                //eg 121->21->
                if(a[i]==a[j])
                {
                    a.erase(a.begin()+i);
                   i--;
                   j--;
                   a.erase(a.begin()+j);
                    j--;
                   
                }
               
            }
        }
    }
    for (int  i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
  
}