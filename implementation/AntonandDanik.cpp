#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int awon = 0;
  int dwon = 0;

  for (int i = 0; i < n; i++)
  {
    char s;
    cin >> s;
    if (s == 'A')
      awon++;
    else if (s == 'D')
      dwon++;
  }
  if (awon > dwon)
    cout << "Anton";
  else if (dwon > awon)
    cout << "Danik";
  else
    cout << "Friendship";

  return 0;
}