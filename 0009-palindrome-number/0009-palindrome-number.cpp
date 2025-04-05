class Solution {
public:
    bool isPalindrome(int x) {

        string s2 , s1;
        s1 = s2 = to_string(x);
        reverse(s2.begin(), s2.end());
        return s1 == s2;
    }
};