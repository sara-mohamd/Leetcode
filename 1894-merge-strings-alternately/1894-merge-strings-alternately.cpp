class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int ptr1 = 0, ptr2 = 0;
        while(ptr1 < word1.size() and ptr2 < word2.size()) {
            ans += word1[ptr1++];
            ans += word2[ptr2++];
        }
        while(ptr1 < word1.size()) { ans += word1[ptr1++]; }
        while(ptr2 < word2.size()) { ans += word2[ptr2++]; }
        return ans;
    }
};