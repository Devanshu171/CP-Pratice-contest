#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int ar[N];
long long int prf[N];
int main()
{
  int n, m;
  cin >> n >> m;
  long long ans = -1;
  while (m--)
  {
    int a, b, d;
    cin >> a >> b >> d;
    ar[a] += d;
    ar[b + 1] += -d;
  }
  for (int i = 1; i <= n; i++)
  {
    prf[i] = prf[i - 1] + ar[i];
    ans = max(prf[i], ans);
  }
  cout << ans << endl;

  return 0;
}