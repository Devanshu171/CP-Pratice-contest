#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s, t;
    cin >> s >> t;
    string m;
    for (int i = 0; i < 5; i++)
    {
      if (s[i] == t[i])
        m.push_back('G');
      else
        m.push_back('B');
    }
    cout << m << endl;
  }
  return 0;
}