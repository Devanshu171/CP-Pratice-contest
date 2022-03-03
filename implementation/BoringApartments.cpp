#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string x;
    cin >> x;
    int y = x[0] - '0';
    int n = x.size();
    cout << (y - 1) * 10 + n * (n + 1) / 2 << endl;
  }
  return 0;
}