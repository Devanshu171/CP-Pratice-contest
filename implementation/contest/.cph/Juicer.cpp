#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, b, d;
  cin >> n >> b >> d;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int ans = 0;
  int ws = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > b)
      continue;
    ws += a[i];
    if (ws > d)
    {
      ans++;
      ws = 0;
    }
  }
  cout << ans << endl;
  return 0;
}