#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n, s;
    cin >> n >> s;
    cout << s / (n * n) << endl;
  }
  return 0;
}