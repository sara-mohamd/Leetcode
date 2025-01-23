class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> seen;
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++) {
            if (find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end()) {

                if (seen.find(nums1[i]) == seen.end()) {
                    ans.push_back(nums1[i]);
                    seen.insert(nums1[i]);
                }
            }
        }
        return ans;
    }
};