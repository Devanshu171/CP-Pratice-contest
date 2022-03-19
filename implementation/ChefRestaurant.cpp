#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)

  {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> ar;

    for (int i = 0; i < n; i++)
    {
      int a, b;
      cin >> a >> b;
      ar.push_back({a, b});
    }
    sort(ar.begin(), ar.end());
    for (int i = 0; i < m; i++)
    {
      int l;
      cin >> l;
      int k = lower_bound(ar.begin(), ar.end(), make_pair(l, 0)) - ar.begin();

      if (k == n)
      {
        if (ar[n - 1].second > l)
          cout << 0 << endl;
        else
          cout << -1 << endl;
      }
      else if (k == 0)
      {
        cout << ar[0].first - l << endl;
      }
      else if (ar[k - 1].second > l)
        cout << 0 << endl;
      else
      {
        cout << ar[k].first - l << endl;
      }
    }
  }

  return 0;
}