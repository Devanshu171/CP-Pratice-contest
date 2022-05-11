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
    int arr[n];
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      mini = min(mini, arr[i]);
    }
    int ans = 0;
    // cout << mini << endl;
    for (int i = 0; i < n; i++)
    {
      ans += abs(mini - arr[i]);
      // cout << abs(mini - arr[i]) << " ";
    }
    // cout << endl;
    cout << ans << endl;
  }

  return 0;
}