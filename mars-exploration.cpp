#include<iostream>
#include<vector>
using namespace std;
#include<string>
int main()
{
    string s;
    cin>>s;
    // SOS SOS
    int c=0;
    for (int  i = 0; i < s.size(); i++)
    {
        if (i%3==0 || i%3==2)
        {
            if (s[i]!='S')
            {
                c++;
            }
            
        }
        else if (i%3==1)
        {
            if (s[i]!='O')
            {
                c++;
            }
            
        }
    }
    cout<<c;
    
}