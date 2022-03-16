#include <bits/stdc++.h>
using namespace std;
string x = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main()
{
  unordered_map<char, int> mpp;
  for (int i = 0; i < x.size(); i++)
  {
    mpp[x[i]] = i;
  }
  char d;
  cin >> d;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {

    if (d == 'L')
    {
      s[i] = x[mpp[s[i]] + 1];
    }
    else
    {
      s[i] = x[mpp[s[i]] - 1];
    }
  }
  cout << s << endl;

  return 0;
}