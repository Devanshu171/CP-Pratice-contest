
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int prev;
  int x, y;
  cin >> x >> y;
  double td = 0;
  for (int i = 1; i < n; i++)
  {
    int x1, y1;
    cin >> x1 >> y1;
    double d = sqrt(pow(abs(x - x1), 2) + (pow(abs(y - y1), 2)));
    td += d;
    x = x1;
    y = y1;
  }
  // cout << fixed << setprecision(9) << td << endl;

  double time = (td * k) / 50;
  cout << fixed << setprecision(9) << time << endl;
  return 0;
}