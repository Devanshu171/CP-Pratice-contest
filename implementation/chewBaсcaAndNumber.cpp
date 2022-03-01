
#include <iostream>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int len = s.size();
  for (int i = 0; i < len; i++)
  {
    int x = s[i] - '0';
    if (i == 0)
    {

      if (x == 9)
        continue;
      else if (x > 4)
        s[i] = ((9 - x) + '0');
    }
    else
    {
      if (x > 4)
        s[i] = ((9 - x) + '0');
    }
  }
  cout << s;

  return 0;
}