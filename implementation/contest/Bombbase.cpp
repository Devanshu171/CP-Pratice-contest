#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      if (arr[i] < x)
      {
        ans = i + 1;
        break;
      }
    }
    cout << ans << endl;
  }
  return 0;
}