#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
int main()
{
    int q;
    cin>> q ;
    for (int  i = 0; i < q; i++)
    {

         vector<int>v;
        vector<int>v2;

    string s="";
    cin>>s;
    string rev=s;
   reverse(rev.begin(),rev.end());
//    cout<<rev<<endl;

   for (long i = 0; i < s.size(); i++)
   {
    v.push_back(s[i]);
   }
   
   vector<int> d;
//    abc
   for (int  i = 0; i < v.size()-1; i++)
   {
        // cout<<v[i]<<" ";
        long a=abs(v[i]-v[i+1]);
        d.push_back(a);
        // cout<<d[i]<<" ";
        
   }
//    cout<<endl;
  
   for (int  i = 0; i < rev.size(); i++)
   {
        v2.push_back(rev[i]);
   }
   vector<int>d2;
   for (int  i = 0; i < v2.size()-1; i++)
   {
        // cout<<v2[i]<<" ";
        long a=abs(v2[i]-v2[i+1]);
        d2.push_back(a);
        // cout<<d2[i]<<" ";
   }

for (int  i = 0; i < d.size(); i++)
{
    if(d[i]!=d2[i])
    {
        cout<<"Not Funny"<<endl;
        goto l;
        
    }

}
cout<<"Funny"<<endl;
l:;

    }
    
   

   
   
  

   

   
   


   
   
    
    
    
}
