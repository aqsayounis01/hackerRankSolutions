#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    float d = 4.0;
    string s = "HackerRank ";
   // for catching buffer 
    int i2;
    double d2;
    string s2;
    cin>>i2>>d2;
  
    // fflush(stdin);
    // or
    cin.ignore();
    getline(cin,s2);


cout<<i+i2<<endl;

printf("%.1f\n",(d+d2));
cout<<s+s2<<endl;

    return 0;
}