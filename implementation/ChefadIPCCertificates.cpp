#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, k;
  cin >> n >> m >> k;
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int min = 0;
    for (int j = 0; j < k; j++)
    {
      int t;
      cin >> t;
      min += t;
    }
    int q;
    cin >> q;
    // cout << q << " ";
    if (min >= m && q <= 10)
      ans++;
  }
  cout << ans << endl;

  return 0;
}