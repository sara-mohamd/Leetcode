class Solution {
public:
    /*  straightforward implementation  */
    // bool isPalindrome(string s) {
    //     int n = s.length();
    //     string str = "", rev_str;
    //     for (int i = 0; i < n; i++) {
    //         char c = (char)tolower(s[i]);
    //         if((c >= 'a' && c <= 'z') || (s[i] >= '0' && s[i] <= '9'))
    //             str += c;
    //     }

    //     n = str.size(), rev_str = str;
    //     for (int i = 0; i * 2 < n; i++) {
    //         swap(rev_str[i], rev_str[n - (i + 1)]);
    //     }
    //     return (rev_str == str);
    // }

    /*  Two pointer implementation  */
    bool isPalindrome(string s) {
        int start = 0, end = s.length() - 1;
        while (start <= end) {
            if(!isalnum(s[start])) { start++; continue; }
            if(!isalnum(s[end])) { end--; continue; }
            if(tolower(s[start]) != tolower(s[end])) { return false; }
            else
                start++, end--;
        }
        return true;
    }
};