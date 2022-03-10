#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int h[100 + 1] = {0}, g[n];
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    h[a]++;
    cin >> g[i];
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans += h[g[i]];
  }
  cout << ans;

  return 0;
}