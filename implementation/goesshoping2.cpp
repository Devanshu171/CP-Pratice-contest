#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> ans{1, 2, 3, 4, 5, 6};
  ans.erase(ans.begin() + 1);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  return 0;
}