#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
      cin >> a[i];
    sort(a, a + n);

    long long sum1 = a[0] + a[1], sum2 = a[n - 1];
    int start = 2;
    int end = n - 2;
    while (start < end)
    {
      if (sum1 < sum2)
      {
        break;
      }
      else
      {
        sum1 += a[start];
        sum2 += a[end];
        start++;
        end--;
      }
    }
    if (sum1 < sum2)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}