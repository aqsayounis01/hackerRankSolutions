#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cin>>n;
    int arr[n];
    if (n<1 || n>60)
    {
        cout<<"Invalid Input"<<endl;
        return 0;
        
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0 || arr[i]>100)
            {
                cout<<"Invalid Input"<<endl;

                return 0;
            }
            
            
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<38)
            {
                continue;
            }
            else if (arr[i]>=38)
            {
                int c=0;
                int f=0;
                c=arr[i];
                while((c%5)!=0)  // c is changing 

                {
                    c++;
                    f++;
                    
                }
            
                
                if(f<3)
                {
                    arr[i]=arr[i]+f;
                }
                else
                {
                    continue;
                }
                
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
        
        
    }
    
    return 0;
}