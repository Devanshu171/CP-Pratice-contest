#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, q;
    cin >> n >> q;
    int a[n + 10];
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    int g1[n + 1], g2[n + 1];
    g1[0] = g2[n + 1] = 0;
    int gc = 0;
    for (int i = 1; i <= n; i++)
    {
      gc = __gcd(gc, a[i]);
      g1[i] = gc;
    }
    gc = 0;
    for (int i = n; i > 1; i--)
    {
      gc = __gcd(gc, a[i]);
      g2[i] = gc;
    }

    while (q--)
    {
      int l, r;
      cin >> l >> r;
      int ans = __gcd(g1[l - 1], g2[r + 1]);
      cout << ans << endl;
    }
  }

  return 0;
}