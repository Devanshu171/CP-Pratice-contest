#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    vector<string> ans;
    int len = s.size();
    for (int i = len - 1; i >= 0; i--)
    {
      int x = s[i] - '0';
      if (x == 0)
        continue;
      else
      {
        char y = x + '0';
        string temp = "";
        temp += y;
        int k = len - 1 - i;
        while (k--)
          temp.push_back('0');
        ans.push_back(temp);
      }
        }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
      cout << ans[i] << " ";
    cout << endl;
  }
  return 0;
}