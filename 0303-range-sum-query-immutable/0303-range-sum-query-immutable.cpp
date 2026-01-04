class NumArray {
private:
    vector<int> arr;
public:
    NumArray(vector<int>& nums) {
        arr = nums;
    }
    
    int sumRange(int left, int right) {

        long long sum = 0;
        while(left <= right)
            sum += arr[left++];
        return sum; 
    }
};