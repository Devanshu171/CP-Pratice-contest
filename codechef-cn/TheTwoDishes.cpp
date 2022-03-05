#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, s;
    cin >> n >> s;
    int maxt = min(s, n);
    int mint = s - maxt;
    cout
        << abs(mint - maxt) << endl;
  }
  return 0;
}