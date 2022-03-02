#include <iostream>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int count = 0;
  int n = s.size();
  for (int i = 0; i < n; i++)
  {
    int x = s[i] - '0';
    if (x == 4 || x == 7)
      count++;
  }
  if (count == 4 || count == 7)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}