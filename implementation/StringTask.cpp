#include <iostream>
using namespace std;
bool consonent(char x)
{
  if (x == 'a' || x == 'e' ||
      x == 'i' || x == 'o' || x == 'u' || x == 'y')
  {
    return false;
  }
  return true;
}
int main()
{
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    char x = tolower(s[i]);
    if (consonent(x))
    {
      cout << "." << x;
    }
  }
  return 0;
}