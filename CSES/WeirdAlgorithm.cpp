#include <iostream>
using namespace std;

int main()
{
  long long n;
  cin >> n;

  while (true)
  {
    cout << n << " ";
    if (n == 1)
      break;

    if (n % 2 != 0)
    {
      n = n * 3 + 1;
    }
    else
    {
      n /= 2;
    }
  }
  cout << endl;
  return 0;
}