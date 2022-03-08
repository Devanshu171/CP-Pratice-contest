#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  char c = s[0];
  bool flag1 = isupper(c), flag2 = true, flag3 = true;

  if (flag1)
    for (int i = i; i < s.size(); i++)
    {
      char x = s[i];
      if (islower(x))
        flag2 = false;
    }
  else
  {
    for (int i = 1; i < s.size(); i++)
    {
      char x = s[i];
      if (islower(x))
        flag3 = false;
    }
    if (flag1 && flag2)
    {
      for (int i = 0; i < s.size(); i++)
      {
        char x = s[i];
        s[i] = tolower(x)
      }
    }
    tolower('s');
    if (!flag1 && flag3)
    {
      char x = s[0];
      s[0] = toupper(x);
      for (int i = 1; i < s.size(); i++)
      {
        char l = s[i];
        s[i] = tolower(l);
      }
    }
  }
  cout << s;
  return 0;
}