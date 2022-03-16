#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int ans = 0;
  sort(a, a + n);
  for (int i = 1; i < n - 1; i++)
  {
    if (a[i] > a[0] && a[i] < a[n - 1])
      ans++;
  }
  cout << ans;

  return 0;
}