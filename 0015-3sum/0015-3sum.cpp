#define sz(x) (x).size()
#define all(x) (x).begin(), (x).end()
class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums)
  {
    sort(all(nums));
    int n = sz(nums);
    vector<vector<int>> answer;
    for (int i = 0; i < n - 2; i++)
    {
      if (i > 0 && nums[i] == nums[i - 1]) continue;
      int l = i + 1, r = n - 1, sum = 1;
      while (l < r)
      {
        sum = nums[i] + nums[l] + nums[r];
        if (sum > 0)
          r--;
        else if (sum < 0)
          l++;
        else {
            answer.push_back({nums[i], nums[l], nums[r]});
            while (l < r && nums[l] == nums[l + 1]) l++;
            while (l < r && nums[r] == nums[r - 1]) r--;
            
            l++;
            r--;
        }
      }
    }
    return answer;
  }
};
