#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string reverse(string str,int n)
{ if(n==0)
 {
     return"";
 }
 return str[n-1]+reverse(str,n-1);
}
int main()
{
    int n;
    cin>>n;
    string str,rev;
    cin>>str;
   rev=reverse(str,n);
    cout<<rev;
    return 0;
}
