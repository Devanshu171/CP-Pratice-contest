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
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      int more = 0;
      for (int j = 0; j < n; j++)
      {
        if (arr[j] > arr[i])
        {
          // cout << arr[i] << endl;
          more++;
        }
      }
      if (more <= (n - more - 1))
        ans++;
    }
    cout << ans << endl;
  }

  return 0;
}