#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  int k = 0;

  for (int i = 0; i < s2.size(); i++)
  {

    if (s1[k] == s2[i])
      k++;
  }
  cout << k + 1;
  return 0;
}