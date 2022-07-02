

#include <bits/stdc++.h>

using namespace std;

int subs(int i,int n,vector<int>arr,int sum,int k)
{
    if(i==n )
    {
        if(sum==k)
       { 
         return 1;
    }
    return 0;
    }
    sum=sum+arr[i];
int l=subs(i+1,n,arr,sum,k);
    sum=sum-arr[i];
int r=subs(i+1,n,arr,sum,k);
return l+r;
}

int main()
{
    int n,sum=0,k;
    cin>>n;
    cin>>k;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<subs(0,n,arr,sum,k);
/*    for(int k=0;k<res.size();k++)
    {
        for(int l=0;l<res[k].size();l++)
        {
            cout<<res[k][l];
        }
        cout<<endl;
    }*/
    return 0;
}
