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
    int b, a = n % 10;
    while (n)
    {
      b = n;
      n /= 10;
    }
    cout << a + b << endl;
  }
  return 0;
}