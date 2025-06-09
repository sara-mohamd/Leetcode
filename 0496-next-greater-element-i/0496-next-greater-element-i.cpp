
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // input num1, num2, process num2.
        // num1 subset num2
        // num1 1e3, 1e6
        stack<int> _stack;
        int n = nums2.size();
        vector<int> result(n, -1), ans;
        for(int i = n - 1; i >= 0; i--) {
            while(!_stack.empty()) {
                if(_stack.top() <= nums2[i]) {
                    _stack.pop();
                    continue;
                }
                result[i] = _stack.top();
                _stack.push(nums2[i]);
                break;
            }
            if(_stack.empty()) {
                _stack.push(nums2[i]);
            
            }
        }

        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < n; j++) {
                if(nums1[i] != nums2[j])
                    continue;
                ans.push_back(result[j]);
            }
        }
        return ans;
        
    }
};