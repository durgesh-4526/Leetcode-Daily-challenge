class FreqStack {
public:
    unordered_map<int,int> freq;
    unordered_map<int, stack<int>> group;
    int max_frequency=0;
    FreqStack() {
        
    }
    
    void push(int val) {
        freq[val]++;
        max_frequency = max(max_frequency, freq[val]);
        group[freq[val]].push(val);
    }
    
    int pop() {
        int top_freq = group[max_frequency].top();
        group[max_frequency].pop();
        freq[top_freq]--;
        if(group[max_frequency].size()==0)
            max_frequency--;
        return top_freq;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
