#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
   string s;
   getline(cin,s);
    stack <char> st;
    
    
    for(int i=0;i<s.size();i++)
    {
        if(st.empty()==false && st.top()==s[i])
        {
            st.pop();
        }
        else
        st.push(s[i]);
    }
    string s2="";

    while(!st.empty())
    {
        s2+=st.top();
       
        st.pop();
    }
    reverse(s2.begin(),s2.end());
    if(s2.size()==0)
    {
        cout<<"Empty String";
        return 0;
    }
    cout<<s2<<endl;
   
    // return s2;
    
 
}