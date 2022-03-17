#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int ar[n][n];
  int ans = 2;
  int prev = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i][0];
    cin >> ar[i][1];
  }
  bool sorted = true;
  bool ratings = true;
  for (int i = 1; i < n; i++)
  {
    if (ar[i][1] > ar[i - 1][1])
      sorted = false;
  }
  for (int i = 0; i < n; i++)
  {
    if (ar[i][0] != ar[i][1])
      ratings = false;
  }

  if (ratings == false)
    cout << "rated" << endl;
  else if (sorted == true && ratings == true)
    cout << "maybe" << endl;
  else
    cout << "unrated" << endl;

  return 0;
}