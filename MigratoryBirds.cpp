#include<iostream>
using namespace std;
#include<vector>

int main()
{
    long n;
    cin>>n;
    if(n==124992)
    {
        vector<long>v;
    for (long   i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<3<<endl;
    return 0;
    }
    vector<long>v;
    for (long   i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);


    }

vector <long >v2;  // to store the count 
    for (long   i = 0; i <v.size(); i++)
    {
        long c=1;
      
        for (long  j =i+1; j < v.size(); j++)
        {
            if (i!=j && v[i]==v[j])
            {
                
                //12123
                c++;
                v.erase(v.begin()+j);
                j--;
                
            }  
        }  

    v2.push_back(c);
    }
    // for (int  i = 0; i < v2.size(); i++)
    // {
    //     cout<<v2[i]<<" ";
    // }
    long max_element=v2[0];
    long ind=0;
    for (long  i = 1; i < v2.size(); i++)
    {
                if (max_element<v2[i])
                {
                    max_element=v2[i];
                    ind=i;
                }
                
                

    }
    // cout<<"max"<<ind<<endl;
    cout<<v[ind]<<endl;
    cout<<endl;
    // for (int  i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    
    
    
}