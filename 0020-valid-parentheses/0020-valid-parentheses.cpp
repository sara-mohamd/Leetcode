class Solution {
public:
    bool isValid(string s) {
        stack<char> _stack;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if(c == '(' || c == '[' || c == '{')
            {
                _stack.push(c);
                continue;
            }
            else if (_stack.empty())
                return false;
            char TOP = _stack.top();
            if((c == ')' && TOP == '(') || (c == ']' && TOP == '[') || (c == '}' && TOP == '{'))
                _stack.pop();
            else
                return false;
        }
        return _stack.size() == 0;
        
    }
};