#include <unordered_map>
#include <vector>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n)
{

  // Your Code goes here
  unordered_map<int, pair<int, int>> mpp;
  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]].first = i;
    mpp[arr[i]].second = 0;
  }
  int count = 0;
  int last = 0;
  int start = 0;
  for (int i = 0; i < n; i++)
  {
    int cnt = 0, l, s = i;
    int k = arr[i];
    if (mpp[arr[i]].second == 0)
    {
      while (true)
      {

        if (mpp.find(k) != mpp.end())
        {
          cnt++;
          l = mpp[k].first;
          mpp[k].second = 1;
        }
        else
        {
          break;
        }
        k++;
      }
      k = arr[i];
      while (true)
      {

        if (mpp.find(--k) != mpp.end())
        {
          cnt++;
          s = mpp[k].first;
          mpp[k].second = 1;
        }
        else
        {
          break;
        }
      }
      // cout<<l<<" "<<s<<endl;
      if (cnt > count)
      {
        count = cnt;
        last = l;
        start = s;
      }
    }
  }
  return vector<int>{arr[start], arr[last]};
}