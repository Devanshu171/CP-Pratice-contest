#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
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
    int ans = 0;
    int t = 0;

    for (int i = n - 1; i >= 0; i--)
    {
      int x = s[i] - '0';
      ans += x * (pow(2, t));
      ans %= mod;

      t++;
    }
    cout << ans << endl;
  }

  return 0;
}