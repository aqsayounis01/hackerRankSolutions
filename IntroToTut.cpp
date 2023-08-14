#include<iostream>
using namespace std;
int main()

{
    int ind,n;
    cin>>ind;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int  i = 0; i < n; i++)
    {
        if (ind==arr[i])
        {
            cout<<i<<endl;
            return 0;
        }
        
    }
    
    return 0;
}