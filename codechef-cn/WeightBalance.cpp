#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int w1, w2, x1, x2, m;
    cin >> w1 >> w2 >> x1 >> x2 >> m;
    double wgpm = double(w2 - w1) / m;

    if (wgpm >= x1 && wgpm <= x2)
      cout << 1 << endl;
    else
      cout << 0 << endl;
  }
  return 0;
}