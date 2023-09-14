#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n=97;
    int a[26];
    for(int i=0;i<26;i++)
    {
        cin>>a[i];
    }
    string s = "";  //zaba
    cin>>s;
    int k[s.size()];  //k[4]
    for(int i=0;i<s.size();i++)   // for each alphabet in the string 
    {
        n=97;
        k[i]=int(s[i]);
      for(int j=0;j<26;j++)  // for each alphabet in english
      {
        if(k[i]==n) 
      {
          k[i]=a[j];
          break;
      } 
      n++;
      
      }
    }

    int max=k[0];
    for (int i = 0; i < (s.size())-1; i++)
    {
        if(max<k[i+1])
        {

            max=k[i+1];
        }
    }
   

    int area=s.size()*max;
   
    cout<<area;
}