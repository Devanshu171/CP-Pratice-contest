#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  if (m % n != 0)
  {
    cout << -1 << endl;
    return 0;
  }
  int d = m / n;
  int ans = 0;
  while (d % 2 == 0)
  {
    ans++;
    d /= 2;
  }
  while (d % 3 == 0)
  {
    ans++;
    d /= 3;
  }
  if (d != 1)
    cout << -1 << endl;
  else
    cout << ans;
  return 0;
}