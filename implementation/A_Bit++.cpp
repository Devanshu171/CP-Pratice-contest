#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int ans = 0;
  while (n--)
  {
    string s;
    cin >> s;
    if (s == "++X" || s == "X++")
      ans++;
    else if (s == "--X" || s == "X--")
      ans--;
  }
  cout << ans << endl;

  return 0;
}