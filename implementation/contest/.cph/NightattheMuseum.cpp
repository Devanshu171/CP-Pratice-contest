#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int start = 'a';
  int moves = 0;
  for (int i = 0; i < s.size(); i++)
  {
    int l1 = abs(s[i] - 97);
    int l2 = abs(start - l1);
    if (l2 < 13)
      moves += l2;
    else
      moves += 26 - l2;
    start = l1;
  }
  cout << moves;

  return 0;
}