#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int arr[n + 1];
  for (int i = 1; i < n; i++)
    cin >> arr[i];
  int k = 1;
  while (k < m)
  {
    k += arr[k];
  }
  if (k == m)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}