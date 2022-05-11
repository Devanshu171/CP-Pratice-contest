#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b;
    cin >> a >> b;

    int side = 2 * min(a, b);
    if (side >= max(a, b))
    {
      cout << side * side << endl;
    }
    else
    {
      cout << max(a, b) * max(a, b) << endl;
    }
  }
  return 0;
}