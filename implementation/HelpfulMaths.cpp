#include <iostream>
using namespace std;

int main()
{
  string s = "3+2+1+1+1+2+3+1+1";
  // cin >> s;
  int n = s.size();
  int a[4] = {0};
  int k = 1;
  for (int i = 0; i < n; i += 2)
  {
    a[s[i] - '0']++;
  }
  string ans = "";
  for (int i = 1; i <= 3; i++)
  {
    while (a[i]--)
    {
      ans += (i + '0');
      if (ans.size() != n)
        ans += "+";
    }
  }
  cout << ans;
  return 0;
}