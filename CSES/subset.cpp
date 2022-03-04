#include <bits/stdc++.h>
using namespace std;
void subset(int i, int a[], int n, vector<int> temp)
{
  if (i == n)
  {
    for (int i = 0; i < temp.size(); i++)
    {
      cout << temp[i] << " ";
    }
    cout << endl;
    return;
  }
  temp.push_back(a[i]);
  subset(i + 1, a, n, temp);
  temp.pop_back();
  subset(i + 1, a, n, temp);
}
int main()
{
  int n = 3;
  int a[n] = {1, 2, 3};

  subset(0, a, n, {});
  return 0;
}