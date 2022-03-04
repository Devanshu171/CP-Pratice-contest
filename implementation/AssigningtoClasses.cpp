#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int ans = 10e5;
    int skill[2 * n];

    for (int i = 0; i < 2 * n; i++)
    {
      cin >> skill[i];
    }
    sort(skill, skill + 2 * n);

    cout << abs(skill[n - 1] - skill[n]) << endl;
  }
  return 0;
}