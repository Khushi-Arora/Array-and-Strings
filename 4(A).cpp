#include <algorithm>
#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> res;

vector<pair<int,int>> pairSum(int arr[],int n,int sum)
{
	unordered_set<int>s;
	int x;
	for(int i=0;i<n;i++)
	{
	x=sum-arr[i];
	if(s.find(x)!=s.end())
	{
		res.push_back(make_pair(x,arr[i]));
	}	
	else
	s.insert(arr[i]);
	}
	
	return res;
}

int main() {
	// Your code goes here;
	int n,arr[100];
	int sum;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>sum;
	pairSum(arr,n,sum);
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i].first<<" - "<<res[i].second<<endl;
	}
	return 0;
}
