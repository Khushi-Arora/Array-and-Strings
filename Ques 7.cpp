
#include <iostream>

using namespace std;

int cnt=0,x=3,y=3;

int countpath(int i,int j)
{
  if (i==x-1 || j==y-1)
    {
     cnt++;
     return 1;
    }
 return countpath(i+1,j)+countpath(i,j+1);
}


int main ()
{
  countpath(0,0);
  cout<<cnt<<endl;
  return 0;
}
