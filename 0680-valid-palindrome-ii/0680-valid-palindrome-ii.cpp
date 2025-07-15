class Solution {
public:
    bool isPalindrome(string s, int l, int r) {
        while(l <= r) {
            if (s[l++] != s[r--])
                return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int  start = 0, end = s.size() - 1;
        while (start <= end) {
            if(s[start] == s[end])
                start++, end--;
            else if(s[start] != s[end]) {
                if(isPalindrome(s, start + 1, end))
                    return true;
                else if (isPalindrome(s, start, end - 1))
                    return true;
                else
                    return false;
            }
            else
                return false;
        }
        return true;
    }

};