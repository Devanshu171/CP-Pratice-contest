#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  // int a[n];
  int x[5000 + 1], y[5000 + 1], z[5000 + 1];
  int xx = 0, yy = 0, zz = 0;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if (a == 1)
      x[xx++] = i + 1;
    if (a == 2)
      y[yy++] = i + 1;
    if (a == 3)
      z[zz++] = i + 1;
  }
  int k = min(xx, min(yy, zz));
  cout << k << endl;
  for (int i = 0; i < k; i++)
  {
    cout << x[--xx] << " " << y[--yy] << " " << z[--zz] << endl;
  }

  return 0;
}