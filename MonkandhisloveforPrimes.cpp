#include <bits/stdc++.h>
using namespace std;
char toUpper(char x)
{
  return x - 'a' + 'A';
}
char toLower(char x)
{
  return x - 'A' + 'a';
}

int main()
{
  string s;
  cin >> s;

  int n = s.size();
  int up = 0, lo = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] >= 97 && s[i] <= 122)
    {

      s[i] = toUpper(s[i]);
      up += s[i];
    }
    else
    {
      s[i] = toLower(s[i]);
      lo += s[i];
    }
  }
  int x = abs(up - lo);
  bool flag = true;
  for (int i = 2; i < x; i++)
  {
    if (x % i == 0)
    {
      flag = false;
      break;
    }
  }
  cout << flag << endl;

  return 0;
}