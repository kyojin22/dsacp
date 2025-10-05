// 21 September, 2025
//
// we gonna buy mac to my brother, today!
//

class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 == 1) return false;

        stack<char> stk;
        for (int c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            } else {
                if (stk.empty()) {
                    return false;
                }
                
                char top = stk.top();
                if (
                    !(c == ')' && top == '(') &&
                    !(c == '}' && top == '{') &&
                    !(c == ']' && top == '[')
                ) {
                    return false;
                }

                stk.pop();
            }
        }
        return stk.empty();
    }
};

