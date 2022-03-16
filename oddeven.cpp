#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n, k;
  cin >> n >> k;
  vector<long long> ans;
  for (long long i = 1; i <= n; i++)
  {
    if (i & 1)
      ans.push_back(i);
  }
  for (long long i = 1; i <= n; i++)
  {
    if (!(i & 1))
      ans.push_back(i);
  }
  cout << ans[k - 1];
}
