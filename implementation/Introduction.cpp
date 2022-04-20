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
    {
      cin >> arr[i];
    }
    int ans = arr[0];
    int fuel = arr[0];
    if (fuel == 0)
      cout << 0 << endl;
    else
    {
      for (int i = 1; i < n; i++)
      {
        ans += arr[i];
        fuel--;
        fuel += arr[i];
        if (fuel == 0)
        {
          break;
        }
      }
      cout << ans << endl;
    }
  }

  return 0;
}