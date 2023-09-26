#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main()
{
    int i,j,k,count=0;
    cin>>i>>j>>k;
    int d,r;
    string rev="";
    for(int m=i;m<=j;m++)
    {
        d=m;
        cout<<d<<endl;
        for(int n=0;d>0;n++)
        {
            r=d%10;
            rev+=to_string(r);
            d=d/10;
           
        }
     
        if(((m-stoi(rev))%k)==0)
        {
            
            count++;
        }
        rev="";
    }
    cout<<count<<endl;
}