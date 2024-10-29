#include<iostream>
#include<string>
using namespace std;
bool isconsonant(char ch)
{
    if(ch<65) return false;
    else if(ch>90 && ch<97)
    return false;
else if(ch=='a'||ch=='A') return false;
else if(ch=='e'||ch=='E') return false;
else if(ch=='i'||ch=='I') return false;
else if(ch=='o'||ch=='O') return false;
else if(ch=='u'||ch=='U') return false;
return true;
}
int main()
{
string s;
getline(cin,s);
int count=0;
for(int i=0;i<s.length();i++)
{
    if(isconsonant(s[i])) count++;
// if(s[i]=='a'||s[i]=='A') continue;
// if(s[i]=='e'||s[i]=='E') continue;
// if(s[i]=='i'||s[i]=='I') continue;
// if(s[i]=='o'||s[i]=='O') continue;
// if(s[i]=='u'||s[i]=='U') continue;
//if(s[i]=='a'||s[i]=='A') continue;
}
cout<<count<<endl;
}

