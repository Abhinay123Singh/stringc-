#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    // string s="Abhinay";
    // // s.substring(idx)
    // cout<<s.substr(4);//  
     string str;
   cout<<"Enter the string:";
   
  // getline(cin,str);
   cin>>str;
   int n=str.length();
   cout<<str.substr(n/2);
}

