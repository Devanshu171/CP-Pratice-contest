#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int i = 0, ans = 0;
  while (i < n)
  {
    int j = i;
    while (j < n && abs(arr[i] - arr[j]) < k)
      j++;
    if (j == n)
    {
      break;
    }
    else
    {
      ans += n - j;
    }
    i++;
  }
  cout << ans << endl;
  return 0;
}