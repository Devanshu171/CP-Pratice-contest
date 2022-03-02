#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int cur_pas = 0;
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int out, in;
    cin >> out >> in;
    cur_pas -= out;
    cur_pas += in;
    ans = max(ans, cur_pas);
  }
  cout << ans;
  return 0;
}