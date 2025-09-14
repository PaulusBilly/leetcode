class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                str.push(c);
            } else {
                if (str.empty()) {
                    return false;
                }
                char top = str.top();
                str.pop();
                if (c == ')' && top != '(') return false;
                if (c == ']' && top != '[') return false;
                if (c == '}' && top != '{') return false;
            }
        }
        return str.empty();
    }
};