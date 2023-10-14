#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long  n;
    cin>>n;
 
// aba  10  10/3=3-> abaabaabaa
// aba->12 ->abaabaabaaba
string s2;
long long  c=0;
long long ss=s.size();
    for (int  i = 0; i < ss; i++)
    {
        if (s[i]=='a')
        {
            c++;
        }
    }
    
    long long t=0;
    long long c2=0;
    long long f=0;
    //t= no of tims the string will repeat 
    long long  r=n%ss;
        t=(n/ss);
        for (long long   i = 0; i < r; i++)
        {
            if (s[i]=='a')
            {
                c2++;
            }
            
        }
        f=c2+(t*c);
        cout<<f;
    
    

    
   
    
    
    
    
    
    
}
