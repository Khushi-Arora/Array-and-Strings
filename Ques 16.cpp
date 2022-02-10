#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void Solve(int n,char s,char h,char d)
{
    if(n==1)
    {
        cout<<"move "<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }
    Solve(n-1,s,d,h);
    cout<<"move "<<n<<" from "<<s<<" to "<<d<<endl;
    Solve(n-1,h,s,d);
}

int main()
{
    int n;
    cin>>n;
    char s='A',d='C',h='B';
    Solve(n,s,h,d);
    return 0;
}
