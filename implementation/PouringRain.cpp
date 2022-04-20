#include <bits/stdc++.h>
using namespace std;
double pie = 3.141592653589793238462643383279502884197169399375105820974944592307816406286;
int main()
{
  int d, h, v, e;
  cin >> d >> h >> v >> e;

  double ds = v / (pie * d * d / 4);
  if (e > ds)
  {
    cout << "NO" << endl;
  }
  else
  {
    double iw = (double)4 * v / (pie * (double)d * (double)d) - e;
    double ans = (double)h / iw;
    cout << "YES" << endl;
    cout << fixed << setprecision(12) << ans << endl;
  }

  return 0;
}