#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;
  map<int, int> mpp;
  for (int i = 0; i < n1 + n2 + n3; i++)
  {
    int a;
    cin >> a;
    mpp[a]++;
  }
  vector<int> ans;
  for (auto it : mpp)
  {
    if (it.second > 1)
      ans.push_back(it.first);
  }
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << endl;

  return 0;
}