#include <iostream>

using namespace std;
void printname (char arr[], int size, int n)
{
  if (n <= 0)
  return;
  cout << arr;
  printname (arr, size, n - 1);
}

int
main ()
{
  char arr[100];
  int n;
  int size;
  cin >> size;
  cin >> n;
  for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
  printname (arr, size, n);
  return 0;
}
