#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string s;
    cin >> n >> s;
    ll ans = 0;
    ll bit = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      int x = s[i] - '0';
      if (x == 1)
        ans += (ll)pow(2, bit);
      bit++;
    }
    cout << ans << endl;
  }
  return 0;
}