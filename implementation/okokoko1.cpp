#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    int n;
    // cin >> n;
    int a[5] = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    // for (int i = 0; i < n; i++)
    // cin >> a[i];
    sort(a, a + n);

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i <= n / 2; i++)
    {
      sum1 += a[i];
    }
    for (int j = (n / 2) + 1; j < n; j++)
    {
      sum2 += a[j];
    }
    if (sum2 > sum1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}