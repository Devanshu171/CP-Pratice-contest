#include <iostream>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int ans = 0;
  while (n--)
  {
    int a;
    cin >> a;
    if (a % k == 0)
      ans++;
  }
  cout << ans << endl;
  return 0;
}