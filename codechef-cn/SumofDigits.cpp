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
    int sum = 0;
    while (n)
    {
      int r = n % 10;
      sum = sum * 10 + r;
      n /= 10;
    }
    cout << sum << endl;
  }
  return 0;
}