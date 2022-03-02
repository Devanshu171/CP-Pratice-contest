#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, n;
    cin >> a >> b >> n;
    int count = 0;
    while (a <= n && b <= n)
    {
      count++;
      if (a > b)
        swap(a, b);
      a += b;
    }
    cout << count << endl;
  }

  return 0;
}