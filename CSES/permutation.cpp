#include <bits/stdc++.h>
using namespace std;
bool chosen[10] = {false};
void permu(int i, int a[], int n, vector<int> temp)
{
  // if (temp.size() == n)
  // {
  //   for (int i = 0; i < n; i++)
  //     cout << temp[i] << " ";
  //   cout << endl;
  //   return;
  // }

  // for (int ind = 1; ind < n; ind++)
  // {
  //   if (chosen[ind])
  //     continue;
  //   chosen[ind] = true;
  //   temp.push_back(ind);
  //   permu(i, a, n, temp);
  //   chosen[ind] = false;
  //   temp.pop_back();
  // }
  //
  // cout << next_permutation(a, a + n);
}
int main()
{
  int n = 4;
  int a[n] = {1, 2, 3, 4};

  while (next_permutation(a, a + n))
  {
    for (int j = 0; j < n; j++)
    {
      cout << a[j] << " ";
    }
    cout << endl;
  }

  return 0;
}