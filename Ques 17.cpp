#include <bits/stdc++.h>

using namespace std;

bool subs(int i,int n,vector<int>arr,vector<int>&temp,vector<vector<int>> &res,int sum,int k)
{
    if(i==n )
    {
        if(sum==k)
       { res.push_back(temp);
        return true;
    }
    return false;
    }
    temp.push_back(arr[i]);
    sum=sum+arr[i];
    if(subs(i+1,n,arr,temp,res,sum,k)==true) return true;
    temp.pop_back();
    sum=sum-arr[i];
    if(subs(i+1,n,arr,temp,res,sum,k)==true)return true;
    return false;
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
    vector<vector<int>>res;
    vector<int>temp;
    subs(0,n,arr,temp,res,sum,k);
    for(int k=0;k<res.size();k++)
    {
        for(int l=0;l<res[k].size();l++)
        {
            cout<<res[k][l];
        }
        cout<<endl;
    }
    return 0;
}
