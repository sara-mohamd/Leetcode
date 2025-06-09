class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        int n = prices.size();
        vector<int> result(n, 0);
        for(int i = n - 1; i >= 0; i--) {
            result[i] = prices[i];
            while(!st.empty()) {
                if(st.top() > prices[i]) {
                    st.pop();
                    continue;
                }
                result[i] -= st.top();
                st.push(prices[i]);
                break;
            }
            if(st.empty()) {
                st.push(prices[i]);
            }
        }
        return result;
    }
};