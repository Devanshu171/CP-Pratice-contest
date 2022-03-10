#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    int ans = 0;
    while (i < n)
    {
      if (s[i] == s[i + 1])
      {
        ans++;
        i += 2;
      }
      else
      {
        i++;
        ans++;
      }
    }
    cout << ans << endl;
  }

  return 0;
}