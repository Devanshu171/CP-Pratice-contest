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
    int ans = 0;
    int arr[7 + 1] = {0};
    int count = 7;
    while (n--)
    {
      int a;
      cin >> a;
      if (count > 0)
        ans++;

      if (a >= 1 && a <= 7)
      {
        if (arr[a] == 0)
        {
          count--;
          arr[a]++;
        }
      }
    }
    cout << ans << endl;
  }

  return 0;
}