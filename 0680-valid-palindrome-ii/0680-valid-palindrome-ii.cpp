class Solution {
public:
    bool isPalindrome(string s, int l, int r) {
        while(l <= r) {
            // cout << s[l] << ' ' << s[r] << '\n';
            if (s[l++] != s[r--])
                return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int chance = 1, start = 0, end = s.size() - 1;
        while (start <= end) {
            if(s[start] == s[end])
                start++, end--;
            else if(s[start] != s[end] && chance) {
                // cout << start << ' ' << end << '\n';
                if(isPalindrome(s, start + 1, end)) {
                    start++, chance = 0;
                }
                else if (isPalindrome(s, start, end - 1))
                    end--, chance = 0;
                else {
                    return false;
                }
            }
            else
                return false;
        }
        return true;
    }

};