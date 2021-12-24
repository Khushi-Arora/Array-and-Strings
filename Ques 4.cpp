#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int palindrome(char arr[],int first,int last)
{
    if(first<last)
    {
        if(arr[first]==arr[last])
         palindrome(arr,first+1,last-1);
        else
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    char arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int first=0;
    int last=n-1;
    int res=palindrome(arr,first,last);
    cout<<res;
    return 0;
}
