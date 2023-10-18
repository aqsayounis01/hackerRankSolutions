#include<iostream>
#include<vector>
using namespace std;
int main()

{
    int t;
    cin>> t ;
    
   
    
    for (int  j = 0; j < t; j++)
    {   vector<int>v2;
        int n;
        cin>>n;
        vector<int > v;
        //2000
        //2222
        //0020
        //0022
        for (int  i = 0; i <n; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            if (i==0)
            {
                v2.push_back(a);
            }
            else{
                v2.push_back(a+v2[i-1]);
            }
            
  
        }
        
    
            int m=v2.size();
            bool flag=false;
            //2000
            //2222
            //123
            //136
            bool f=true;
            for (int  i = 1; i < v2.size(); i++)
            {
                
                //1233
                if (v2[i-1]==v2[m-1]-v2[i])
                {
                 flag=true;  
                 

                 break;
                }
            }
            for (int  i = 1; i < v2.size(); i++)
            {
                if (v2[i-1]!=v2[i])
                {
                    f=false;
                }
                
            }
            if (flag==true || f==true)
            {
               cout<<"YES"<<endl;
            }
            else if(flag==false && f==false)
            {
                cout<<"NO"<<endl;
            }
            
            
        
        
        
       
}
}