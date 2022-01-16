#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void printallcom(char temp[],string &digit,int i,vector<vector<char>> &digitmap)
{
    if(i==digit.length())
    {
        for(int k=0;k<digit.size();k++)
        cout<<temp[k];
        cout<<endl;
        return;
    }
    for(int j=0;j<digitmap[digit[i]-'2'].size();j++)
    {
        temp[i]=digitmap[digit[i]-'2'][j];
        printallcom(temp,digit,i+1,digitmap);
    }
}

int main ()
{
  string digit;

  cin >> digit;
  vector < vector < char >>digitmap;
  digitmap.push_back (
		       {
		       'a', 'b', 'c'});
  digitmap.push_back (
		       {
		       'd', 'e', 'f'});
  digitmap.push_back (
		       {
		       'g', 'h', 'i'});
  digitmap.push_back (
		       {
		       'j', 'k', 'l'});
  digitmap.push_back (
		       {
		       'm', 'n', 'o'});
  digitmap.push_back (
		       {
		       'p', 'q', 'r','s'});
  digitmap.push_back (
		       {
		       't', 'u', 'v'});
  digitmap.push_back (
		       {
		       'w', 'x', 'y', 'z'});
		       char temp[digit.size()];

  printallcom (temp, digit, 0, digitmap);


  return 0;
}
