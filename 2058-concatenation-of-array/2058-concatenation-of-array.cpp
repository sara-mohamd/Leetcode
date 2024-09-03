class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result(nums);
        result.insert(result.end(), nums.begin(), nums.end());
        return result;
    }
};