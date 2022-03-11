#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    int dist = (abs(a - c) + abs(b - d));
    if (dist > k)
    {
      cout << "NO" << endl;
    }
    else if (dist == k)
    {
      cout << "YES" << endl;
    }
    else
    {
      if ((dist & 1) && (k & 1))
        cout << "YES" << endl;
      else if (!(dist & 1) && !(k & 1))
        cout << "YES" << endl;
      else
      {
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}