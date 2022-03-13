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
    int n = s.size();
    int c = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
      if (s[i] != s[0] && s[i] != s[n - 1])
        c = c + 1;

      else
        c = 0;

      ans = max(ans, c);
    }
    if (ans == 0)
      cout << -1 << endl;
    else
      cout << ans << endl;
  }
  return 0;
}