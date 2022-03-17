#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
      cin >> ar[i];
    }
    sort(ar, ar + n);
    int i = 0;
    // cout << ((ar[i] + 1) / 2) << " " << k << endl;
    while (i < n && ((ar[i] + 1) / 2) <= k)
    {

      k -= ar[i];
      i++;
    }

    cout << i << endl;
  }
  return 0;
}