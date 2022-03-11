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
    if (pow(3, n - 1) > 1e9)
      cout << "NO" << endl;
    else
    {
      cout << "YES" << endl;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
        cout << pow(3, i) << " ";
      }
      cout << endl;
    }
  }

  return 0;
}