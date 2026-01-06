class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        int one = __builtin_popcount(n);
        return (one == 1);
    }
};