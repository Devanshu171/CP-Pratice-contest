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
    while (i < n && ceil(ar[i] / 2) <= k)
    {

      i++;
      k -= ar[i];
    }

    cout << i << endl;
  }
  return 0;
}