#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s, b;
    cin >> s >> b;
    int a[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
      a[s[i] - 97]++;
    }
    for (int i = 0; i < b.size(); i++)
    {
      a[b[i] - 97]--;
    }
    int ans = 0;
    for (int i = 0; i < 26; i++)
      ans += abs(a[i]);

    cout << ans << endl;
  }

  return 0;
}