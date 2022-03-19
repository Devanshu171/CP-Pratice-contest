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
    int a[n];
    int maxi = -1;
    int mini = 1e5 + 10;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      maxi = max(maxi, a);
      mini = min(mini, a);
    }
    cout << maxi - mini << endl;
  }
  return 0;
}