#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> left(n), right(n);
    for (int i = 0; i < n; i++)
      cin >> left[i];
    for (int i = 0; i < n; i++)
      cin >> right[i];
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
      ans += min(left[i + 1], right[i]);
    }

    cout << ans << endl;
  }

  return 0;
}