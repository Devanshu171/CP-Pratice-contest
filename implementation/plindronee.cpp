#include <bits/stdc++.h>
using namespace std;
void solve(string s)
{
  int n = s.size();
  int odd = 0;
  int count[26] = {0};
  for (int i = 0; i < n; i++)
  {
    count[s[i] - 'a']++;
  }
  for (int i = 0; i < n; i++)
  {
    if (count[i] > 0 && (count[i] & 1))
      odd++;
  }
  if (odd <= 1)
    cout << "YES" << endl;

  else
    cout << "NO" << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--)
    {
      int l, r;
      cin >> l >> r;
      l--;
      r--;
      solve(s.substr(l, r - l + 1));
    }
  }

  return 0;
}