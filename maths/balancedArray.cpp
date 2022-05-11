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
    if ((n / 2) & 1)
      cout << "NO" << endl;
    else
    {
      cout << "YES" << endl;
      int sum = 0;
      for (int i = 1; i <= n; i++)
      {
        if (i % 2 == 0)
        {
          sum += i;
          cout << i << " ";
        }
      }
      int arr[n / 2];
      for (int i = 1; i <= n; i++)
      {
        if (i % 2 != 0)
        {
          arr[i] = i;
          sum -= i;
        }
      }
      int i = 0;
      while (sum != 0)
      {

        arr[i++] += 2;
        if (i == n / 2)
          i = 0;
        sum -= 2;
      }
      for (int i = 0; i < n / 2; i++)
      {
        cout << arr[i] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}