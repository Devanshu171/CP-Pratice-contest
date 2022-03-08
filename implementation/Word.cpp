#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int up = 0, lo = 0;
  for (int i = 0; i < s.size(); i++)
  {
    char x = s[i];
    if (islower(x))
      lo++;
    else
      up++;
  }
  if (lo < up)
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  else
    transform(s.begin(), s.end(), s.begin(), ::tolower);

  cout << s;

  return 0;
}