#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int maxi = -1;
  int mx;
  for (int i = n - 1; i >= 0; i--)
  {
    if (arr[i] >= maxi)
    {
      maxi = arr[i];
      mx = i;
    }
  }
  int mini = arr[0];
  int mi;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] <= mini)
    {
      mini = arr[i];
      mi = i;
    }
  }
  int ans = mx + (n - 1 - mi);
  if (mi < mx)
    ans--;
  cout << ans;

  return 0;
}