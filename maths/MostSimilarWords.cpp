#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int m;
    cin >> m;

    string arr[n];
    // cout << m << endl;
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      string s1 = arr[i];
      for (int j = i + 1; j < n; j++)
      {
        string s2 = arr[j];
        int diff = 0;
        for (int k = 0; k < m; k++)
        {
          // cout << "i'm here" << endl;
          diff += abs(s1[k] - s2[k]);
        }
        ans = min(ans, diff);
      }
    }
    cout << ans << endl;
  }

  return 0;
}