class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string str = "", rev_str;
        for (int i = 0; i < n; i++) {
            char c = (char)tolower(s[i]);
            if((c >= 'a' && c <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                str += c;
        }

        n = str.size(), rev_str = str;
        for (int i = 0; i * 2 < n; i++) {
            swap(rev_str[i], rev_str[n - (i + 1)]);
        }
        // cout << "reg " << str << "\nrev " << rev_str << '\n';
        return (rev_str == str);
    }
};