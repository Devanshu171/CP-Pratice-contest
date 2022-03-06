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
    int sum = n * (n + 1) / 2;
    if (sum & 1)
      cout << --n << endl;
    else
      cout << n << endl;
  }
  return 0;
}