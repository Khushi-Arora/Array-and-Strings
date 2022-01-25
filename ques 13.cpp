#include <bits/stdc++.h>

using namespace std;
void sort(stack<int> &v,int n,int temp)
{
    if(v.size()==n/2 +1)
    {v.pop();
    return;}
    temp=v.top();
    v.pop();
    sort(v,n,temp);
    v.push(temp);
    
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
    
    sort(v,n,0);
     while (!v.empty()) {
        cout << v.top()<< ' ';
        v.pop();
    }
    return 0;
}
