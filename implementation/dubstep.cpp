#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  string k = "WUB";
  int i = 0;
  string ans = "";
  while (i < n)
  {
    // cout << s.substr(i, 3) << endl;
    while (i <= n - 3 && s.substr(i, 3) == k)
    {
      // cout << s.substr(i, 3) << endl;
      i += 3;
    }
    int j = i;
    while (j < n && s.substr(j, 3) != k)
      j++;
    cout << s.substr(i, j - 1) << " ";
    i++;
  }

  return 0;
}