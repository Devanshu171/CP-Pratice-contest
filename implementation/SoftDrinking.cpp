#include <iostream>
using namespace std;

int main()
{
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int ans = k * l / nl;
  ans = min(c * d, ans);
  ans = min(ans, p / np);
  cout << ans / n;

  return 0;
}