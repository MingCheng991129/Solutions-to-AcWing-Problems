class MyQueue {
public:
    stack<int> stk;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stack<int> s;
        while (!stk.empty()) {
            int val = stk.top();
            stk.pop();
            s.push(val);
        }
        stk.push(x);
        while (!s.empty()) {
            int val = s.top();
            s.pop();
            stk.push(val);
        }
        return;
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int val = stk.top();
        stk.pop();
        return val;
    }
    
    /** Get the front element. */
    int peek() {
        return stk.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return stk.empty();
    }
    
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
