#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int a[n];
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }
  sort(a, a + n);
  int ans = 0;
  int sum2 = 0;
  int i = n - 1;
  while (i >= 0)
  {
    sum2 += a[i];
    sum -= a[i];
    ans++;
    if (sum < sum2)
      break;
    i--;
  }
  cout << ans << endl;
  return 0;
}