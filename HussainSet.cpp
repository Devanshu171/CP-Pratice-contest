#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 10000000;
ll ans[N];
int main()
{
  int n, m;
  cin >> n >> m;
  ll arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  queue<ll> q;
  sort(arr, arr + n);
  int count_m = 0;
  int end_p = n - 1;
  while (m--)
  {
    int cur_m;
    cin >> cur_m;
    ll ans;
    for (; count_m < cur_m; count_m++)
    {
      if (end_p >= 0 && (q.empty() || arr[end_p] >= q.front()))
      {
        ans = arr[end_p--];
      }
      else
      {
        ans = q.front();
        q.pop();
      }
      q.push(ans / 2);
    }
    cout << ans << endl;
  }

  return 0;
}