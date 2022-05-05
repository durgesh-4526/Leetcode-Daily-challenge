class MyStack {
public:
     MyStack() {
        queue<int> a;
    }
    queue<int> a;
    /** Push element x onto stack. */
    void push(int x) {
        a.push(x);
        for(int i=0; i<a.size()-1; i++)
        {
            a.push(a.front());
            a.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int q = a.front();
        a.pop();
        return q;
    }
    
    /** Get the top element. */
    int top() {
        return a.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
