#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int k;
  string s;
  cin >> k >> s;
  vector<int> c(26, 0);
  for (auto it : s)
  {
    c[it - 'a']++;
  }
  string ans = "";
  for (int i = 0; i < 26; i++)
  {
    if (c[i] % k == 0)
    {
      int j = c[i] / k;
      while (j--)
      {
        ans.push_back(i + 'a');
      }
    }
    else
    {
      cout << -1 << endl;
      return 0;
    }
  }
  string old = ans;
  while (--k)
    ans += old;
  cout << ans;
  return 0;
}