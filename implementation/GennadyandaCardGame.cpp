#include <iostream>
using namespace std;

int main()
{

  string initial;
  ;
  cin >> initial;
  string myCards[5];
  for (int i = 0; i < 5; i++)
    cin >> myCards[i];

  for (int i = 0; i < 5; i++)
  {

    if (initial[0] == myCards[i][0] || initial[1] == myCards[i][1])
    {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";

  return 0;
}
