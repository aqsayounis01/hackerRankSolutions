#include<iostream>
using namespace std;

int main()
{
    
    
    long arr[5];
    long temp;
 
for (int  i = 0; i < 5; i++)
{
    cin>>arr[i];

    if (arr[i]<1 || arr[i]>1000000000)
    {
        cout<<"Invalid Input";
        return 0;
    }
}
        // for sorting the array
        for (int   i = 0; i < 5; i++)
        {
            for (int  j = 0; j < 5; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
            
        }


        


    //min element 
    long min=0;
    for (long i = 0; i < 4; i++)
    {
        min=min+arr[i];
    }

    
    //max element 
    long max=0;
    for (long i = 1; i < 5; i++)
    {
        max=max+arr[i];
    }

    cout<<min<<" "<<max;

    }
    



            
        
