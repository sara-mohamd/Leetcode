class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> sol; 
        for ( auto it : strs)
        {
            string s = it;
            sort(s.begin(), s.end());
            m[s].push_back(it);
        }
        for (auto var: m)
        sol.push_back(var.second);
            
        return sol;
    }
};