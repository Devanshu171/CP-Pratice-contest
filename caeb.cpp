#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x, k;
    cin >> n >> x >> k;
    int ans = 0;
    while (k >= x && ans < n)
    {
      k -= x;
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}