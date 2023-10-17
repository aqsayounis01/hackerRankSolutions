#include<iostream>
#include<fstream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    int n;
    cin>>n;
    vector <int > v ;
    for (int  i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int m;
    
    cin>>m;
    vector<int>v2;
    for (int  i = 0; i < m; i++)
    {
        int a;
        cin>>a;
        v2.push_back(a);
    }
    int c=0;
    vector<int>v3;
    for (int  i = 0; i < v2.size(); i++)
    {
        c=0;
        for (int  j = 0; j < v.size(); j++)
        {  //123
           //1123
            if(v2[i]==v[j])
            {
                c++;
                v.erase(v.begin()+j);
                j--;
                break;

            }
        }
        if (c==0)
        {
         v3.push_back(v2[i]);   
        }
     
    }
    sort(v3.begin(),v3.end());
    //112323
    for(int i=0;i<v3.size();i++)
    {
        for(int j=i+1;j<v3.size();j++)
        {
            if(v3[i]==v3[j] )
            {
                v3.erase(v3.begin()+j);
                j--;
            }
        }
        
    }
    for (int  i = 0; i <v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    }
  return 0;  
    
    
}
