#include<iostream>
#include<vector>
using namespace std;
int main()

{
    int n;
    cin>>n;
    vector<int>v;
    for (int  i = 0; i <n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);

    }
    int d,m;
    cin>>d>>m;
    // day=sum, month=length of the sub array

int c=0;
int sum=0;
    int j=0;
    for (int  i = 0; i < v.size(); i++)
    {
     
       sum=0;
        int t=0;
        j=i;
        while (t<m && j<v.size() )
        {
            sum+=v[j];
            t++;
            j++;
        }
        // cout<<sum<<endl;
    
        if (sum==d)
        {
            c++;
        }
    }
    cout<<c;
    
    
    
    
    return 0;
}