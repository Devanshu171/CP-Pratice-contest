#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int f = 0, l = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] - '0' == 1)
        l = i;
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
      if (s[i] - '0' == 1)
        f = i;
    }
    int ans = 0;
    for (int i = f; i < l; i++)
    {
      if (s[i] - '0' == 0)
        ans++;
    }
    cout << ans << endl;
  }
  return 0;
}