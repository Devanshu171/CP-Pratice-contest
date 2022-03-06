#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int u, v, a, s;
    cin >> u >> v >> a >> s;
    int f = sqrt(u * u - 2 * a * s);
    if (u <= v)
      cout << "YES" << endl;
    else if ((f) <= v)
      cout
          << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}