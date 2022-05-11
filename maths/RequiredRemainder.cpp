#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll x, y, n;
    cin >> x >> y >> n;
    ll ans = (n - y) / x;
    cout << x * ans + y << endl;
  }
  return 0;
}