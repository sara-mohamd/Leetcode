class Solution {
public:
  /* -------- data structure–based solution ---------- */
//   bool containsNearbyDuplicate(vector<int> &nums, int k) {
//     unordered_map<int, int> lastSeen;

//     for (int i = 0; i < nums.size(); i++) {
//       if (lastSeen.count(nums[i]) && i - lastSeen[nums[i]] <= k)
//         return true;
//       lastSeen[nums[i]] = i;
//     }
//     return false;
//   }

 bool containsNearbyDuplicate(vector<int> &nums, int k) {
    int l = 0, r = 0, n = nums.size();
    unordered_map<int, int> freq;
    while (l < n) {
        while (r <= (k + l) and r < n)
    {
        freq[nums[r]]++;
            if (freq[nums[r]] == 2)
        return true;
        r++;
    }
        freq[nums[l++]]--;
    }
    return false;
 }
};
