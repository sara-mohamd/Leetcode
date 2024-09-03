class Solution {
public:
    bool isSubsequence(string s, string t) {
        int c1 = 0 , c2 = 0;
        while (c1 < s.length() && c2 < t.length()) {
            if(s[c1] == t[c2])
                c1++;
            c2++;
        }
        return (c1 == s.length());
    }
};