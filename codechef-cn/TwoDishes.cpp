#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if (min(a, b) + min(c, b - min(a, b)) >= n)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}