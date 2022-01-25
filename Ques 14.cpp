#include <bits/stdc++.h>

using namespace std;
void insert(stack<int> &v,int temp)
{
    if(v.size()==0)
    {
        v.push(temp);
        return;
    }
    int val=v.top();
    v.pop();
    insert(v,temp);
    v.push(val);
    return;
}
void reverse(stack<int> &v,int n,int temp)
{
    if(v.size()==0)
    {return;}
    temp=v.top();
    v.pop();
    reverse(v,n,temp);
    insert(v,temp);
    
}

int main()
{
    int n;
    cin>>n;
    stack<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push(x);
    }
    
    reverse(v,n,0);
     while (!v.empty()) {
        cout << v.top()<< ' ';
        v.pop();
    }
    return 0;
}
