#include<bits/stdc++.h>
#include <iostream>

using namespace std;
int binarysearch (int first, int last, int key, int arr[])
{
  int mid = (first + last) / 2;
  if (first < last)
    {
      if (key == arr[mid])
	return mid;
      if (key < arr[mid])
	binarysearch (first, mid - 1, key, arr);
      if (key > arr[mid])
	binarysearch (mid + 1, last, key, arr);

    }
    else 
    return -1;
}

int
main ()
{
  int n, first = 0, key, res = -1, last, arr[100];
  cin >> n;
  cin >> key;
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  last = n-1;
  res = binarysearch (first, last, key, arr);
  cout << res+1;

  return 0;
}
