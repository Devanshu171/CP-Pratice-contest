#include <iostream>
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    int arr[3];
    int maxi = 0;
    for (int i = 0; i < 3; i++)
    {
      cin >> arr[i];
      maxi = max(maxi, arr[i]);
    }
    int n;
    cin >> n;
    int diff = 0;
    for (int i = 0; i < 3; i++)
    {
      diff += maxi - arr[i];
    }
    // cout << "diff--->" << diff << endl;
    // cout << "n-diff-->" << n - diff << endl;
    if (diff > n || (n - diff) % 3 != 0)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}
