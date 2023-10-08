#include<iostream>
#include<vector>
using namespace std;


int main()
{
int c=0;
    vector <int > v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);

    }


while(v.size()>0)
{

c=0;
    auto min=v.begin();
    int m=*min;
    for(int i=0;i<v.size();i++)
    {
        if (m>v[i])
        {
            m=v[i];
        }
        
    }
    // cout<<"min:"<<m<<endl;
    // cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        // cout<<"v[i]:"<<v[i]<<endl;
        v[i]=v[i] - m;
        // cout<<v[i]<<" ";
        c++;
    }
cout<<c<<endl;



for(int i=0;i<v.size();i++)
{
    if(v[i]==0)
    {
        v.erase(v.begin()+i);   
        i--;            //when it is removed , immediately next element comes at its position
    }
}
// for(int i=0;i<v.size();i++)
// {
//     cout<<v[i]<<" ";
// }
// cout<<endl;


}
}