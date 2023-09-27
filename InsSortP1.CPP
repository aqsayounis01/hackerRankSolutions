#include<iostream>
using namespace std;

int main()
{
    
    
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

// 2,3,4,5,6,7,8,9,10,10
    int i=n-1;
    int j=i-1;
    int cur =arr[i];
    while(i>=0  && j>=0)
      {
        
        if(cur<arr[j])
        {
            arr[j+1]=arr[j];
            j--;

            for(int k=0;k<n;k++)
            {
            cout<<arr[k]<<" ";
            }
            cout<<endl;
           
            if(j==-1)
            {
                arr[j+1]=cur;
                for(int k=0;k<n;k++)
            {
            cout<<arr[k]<<" ";
            }
            }
        }
        else if(cur>arr[j])
        {
            arr[j+1]=cur; 
             
            for(int k=0;k<n;k++)
            {
            cout<<arr[k]<<" ";
            }
            
            break;
            
        }
        
        
        
        
        
    }

    
    
}