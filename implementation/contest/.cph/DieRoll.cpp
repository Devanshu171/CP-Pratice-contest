#include <bits/stdc++.h>
using namespace std;

int main()
{
  int y, w;
  cin >> y >> w;
  int d = 6 - max(y, w) + 1;

  if (d == 6)
    cout << 1 << "/" << 1;
  if (d == 5)
    cout << 5 << "/" << 6;
  if (d == 4)
    cout << 2 << "/" << 3;
  if (d == 3)
    cout << 1 << "/" << 2;
  if (d == 2)
    cout << 1 << "/" << 3;
  if (d == 1)
    cout << 1 << "/" << 6;
  if (d == 0)
    cout << 0 << "/" << 6;

  return 0;
}