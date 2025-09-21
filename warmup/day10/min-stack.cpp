// 21 September, 2025
//
//  Idea is to use two stacks
//  One for like traditional stack
//  Second one like keeping current min so far
//

class MinStack {
public:
    stack<int> s;
    stack<int> minS;

    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        
        if (minS.empty()) {
            minS.push(val);
        } else {
            minS.push(min(minS.top(), val));
        }
    }
    
    void pop() {
        s.pop();
        minS.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minS.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

