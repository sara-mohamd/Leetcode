#define sz(x) (x).size()
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0, ans = 0;
        for (int i = 1; i < sz(prices); i++) {
            if (prices[i] < prices[buy])
                buy = i;
            else
                ans = max(ans, prices[i] - prices[buy]);
        }
        return ans;
    }
};