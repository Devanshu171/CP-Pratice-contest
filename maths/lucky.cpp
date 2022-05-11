#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    if (s.size() < 6)
      cout << "NO" << endl;
    int sum = 0;
    for (int i = 0; i < s.size() / 2; i++)
    {
      sum += s[i] - '0';
      sum -= s[s.size() - i - 1] - '0';
    }
    if (sum == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}