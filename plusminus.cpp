
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>0 &&n<=100)
    {
    int arr[n];
    int nc=0,pc=0,zc=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=100 && arr[i]>=-100)
        {
            if(arr[i]==0)
            {
                zc++;
            }
            else if(arr[i]>0)
            {
                pc++;
            }
            else if(arr[i]<0)
            {
                nc++;
            }
            continue;
        }
        else
        {
            cout<<"Inalid Input";
            return 0; 
        }
        
    }
    //printing ratios
    
    printf("%.6f\n",(float)pc/n);
    printf("%.6f\n",(float)nc/n);
    printf("%.6f",(float)zc/n);

    
    
    
    
    }
    else
    cout<<"Invalid Input";
 return 0;   
}
