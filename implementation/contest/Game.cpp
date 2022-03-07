#include <iostream>
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
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int last0 = n - 1;
    int first0 = 0;
    while (last0 >= 0 && a[last0 - 1] != 0)
      last0--;
    while (first0 < n && a[first0 + 1] != 0)
      first0++;

    cout << max(0, last0 - first0) << endl;
  }
  return 0;
}