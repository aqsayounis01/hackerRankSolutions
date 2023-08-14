#include<iostream>
#include<string>
using namespace std;
void chk(string s)
{
    string temp="";
    int n=s.size();
    
    if (s[s.size()-2]=='A')
    {
        n-=2;

        if (s[0]=='1' && s[1]=='2')
        {
            
            cout<<"00";
            for (int  i = 2; i < n; i++)
            {
                temp[i]=s[i];
                cout<<temp[i];
            }
            
        }
        else
        {
        for (int  i = 0; i <n; i++)
        {
            
            temp[i]=s[i];
            cout<<temp[i];
        }
        }  
    }
    else if (s[s.size()-2]=='P')
    {
        n-=2;
        // int siz=0;
        if (s[0]=='1' && s[1]=='2')
        {
            
          for (int  i = 0; i < n; i++)
            {
                temp[i]=s[i];
                cout<<temp[i];
                
            }
            
        }

 else{

        int i=0;
        string s1="";
      

        while (s[i] !=':')
        {
            s1+=s[i];         
            i++;
        }
        
        int t=0;
        t=stoi(s1);
        t=t+12;

        cout<<t;
        for (int  i = 2; i < n; i++)
        {
            cout<<s[i];
        }
        
    
        
    }
    }
    
}
int main()

{
    string inp;
    cout<<"enter the string ";
    cin>>inp;
   
    //constraints 
    if (inp[2] != ':' || inp[5] != ':' )
    {
       cout<<"Invalid Input C";
       return 0;
    }

    string t1="",t2="",t3="",t4="";
    
    for (int  i = 0; i <=1 ; i++)
    {
        t1+=inp[i];
    }
    if(stoi(t1)>=13 || stoi(t1)<=0)
    {
        cout<<"Invalid Input t1";
        return 0;
    }


    for (int  i = 3; i <=4 ; i++)
    {
        t2+=inp[i];
    }
    if(stoi(t2)>=59 || stoi(t2)<=0)
    {
        cout<<"Invalid Input t2 ";
        return 0;
    }

    for (int  i = 6; i <=7 ; i++)
    {
        t3+=inp[i];
    }
    if(stoi(t3)>=59 || stoi(t1)<=0)
    {
        cout<<"Invalid Input t3";
        return 0;
    }

    for (int  i = 8; i <=9 ; i++)
    {
        t4+=inp[i];
    }
    if(t4 != "AM" && t4!= "PM")
    {
        cout<<"Invalid Input t4 ";
        return 0;
    }
    
    chk(inp);

    return 0;
}