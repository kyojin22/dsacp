// 23 September, 2025
//
// emmm, hi
//

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (string c : tokens) {
            if (c == "+") {
                int n2 = s.top(); s.pop();
                int n1 = s.top(); s.pop();
                s.push(n1 + n2);
            } else if (c == "-") {
                int n2 = s.top(); s.pop();
                int n1 = s.top(); s.pop();
                s.push(n1 - n2);
            } else if (c == "*") {
                int n2 = s.top(); s.pop();
                int n1 = s.top(); s.pop();
                s.push(n1 * n2);
            } else if (c == "/") {
                int n2 = s.top(); s.pop();
                int n1 = s.top(); s.pop();
                s.push(n1 / n2);
            } else {
                s.push(stoi(c));
            }
        }
        return s.top();
    }
};

