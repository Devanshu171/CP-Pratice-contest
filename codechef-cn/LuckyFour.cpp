#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n.size(); i++)
    {
      if (n[i] - '0' == 4)
        ans++;
    }
    cout << ans << endl;
  }
  return 0;
}