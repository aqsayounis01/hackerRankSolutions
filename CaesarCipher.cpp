#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    string s;
    cin>>s;
    cin>>k;
    
   
   for(int i=0;i<s.size();i++)
   {
       if(s[i]!= '-')
       {
           if(s[i]>='a' && s[i]<='z')
           {
           
               s[i]= (((s[i]- 'a' )+k)%26)+('a');   // first paranthesis - to make it equal to original value (0-25)
               cout<<s[i];
           }
           
           
           else if(s[i]>='A' && s[i]<='Z')
           {
               s[i]= (((s[i]- 'A' )+k)%26)+('A');
               cout<<s[i];
           }
           else
           {
               cout<<s[i];
           }
           
       }
   }
   
    
}
