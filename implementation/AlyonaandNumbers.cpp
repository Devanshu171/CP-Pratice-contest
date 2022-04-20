#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int arr2[N + 10];
int main()
{
  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= m; i++)
  {
    arr2[i % 5]++;
  }
  long long ans = 0;
  for (int i = 1; i <= n; i++)
  {
    ans += arr2[(5 - (i % 5)) % 5];
  }
  cout << ans;
  return 0;
}