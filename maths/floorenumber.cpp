#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x;
    cin >> n >> x;
    int arr[1000];
    arr[0] = 2;
    int i = 1;
    for (; arr[i - 1] < n; i++)
    {
      arr[i] = arr[i - 1] + x;
    }

    cout << i << endl;
  }

  return 0;
}