#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int s, a, b, c;
    cin >> s >> a >> b >> c;
    double k = s + double(s * c) / 100;
    if (k >= a && k <= b)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}