#include<iostream>
#include<vector>
using namespace std ;


int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for (int  i = 0; i < n; i++)
    {int m;
        cin>>m;
        a.push_back(m);
    }
    int c=0;
    for (int  i = 0; i < a.size(); i++)
    {
        for (int  j=i+1; j< a.size(); j++)
        {
            if (a[i]==a[j])
            {
                c++;
                a.erase(a.begin()+j);
                a.erase(a.begin()+i);
                i--;
                break;
            }    
        }
        
    }
    
    cout<<c;
}