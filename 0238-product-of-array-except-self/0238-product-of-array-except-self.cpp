class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        output[0] = 1;
        for (int i = 1; i < n; i++) {
            output[i] = output[i - 1] * nums[i - 1];
            // output[0] => 1
            // output[1] => 1 * 1 = 1
            // output[2] => 1 * 2 = 2
            // output[3] => 2 * 3 = 6
        }
        // output[4] = { 1, 1, 2, 6 }
        int right = 1;
        for (int i = n-1; i >= 0; i--) {
            output[i] *= right; // output[1] = 1 * 12 = 12
            right *= nums[i];   // right = 12 * 2
            
        }
        return output;
        // output = { 1, 12, 8, 6 }
    }
};