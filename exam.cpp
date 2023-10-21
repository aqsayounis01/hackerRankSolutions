#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][2];
    int r=0;
    for (int  i = 0; i < n; i++)
    {
        for(int j=0;j<2;j++)
        cin>>a[i][j];
    }
//5,10 , 7,12 , 13,14

    for (int  i = 0; i < n; i++)
    {
        r += a[i][1] -a [i][0];

    }
    for (int  i = 0; i < n-1; i++)
    {
        r-= a[i][1] - a[i+1][0];
    }
    
    cout<<r;
    
    
}