#include<iostream>
using namespace std;

int main()
{
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    if((x1<0 ||x1>10000) ||(x2<0 ||x2>10000) ||(v2<0 ||v2>10000) || (v1<0 ||v1>10000)  )
    {
        cout<<"Invalid Input";
        return 0;
    }
    
   for(long i=x1,j=x2;i<=100000000;i=i+v1,j=j+v2)
   {
       if(i==j)
       {
           cout<<"YES";
           return 0;
       }
   }
   cout<<"NO";
}