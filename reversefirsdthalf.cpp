#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{

// function 4 reverse functiom 
string s;
getline(cin,s);
// reverse first half
int n=s.length();
reverse(s.begin(),s.begin()+n/2);
cout<<s<<endl;
}