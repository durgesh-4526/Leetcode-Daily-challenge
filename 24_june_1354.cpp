class Solution {
public:
    bool isPossible(vector<int>& target) {
        long long sum = accumulate(target.begin(),target.end(),(long long)0);
        priority_queue<int> pq(target.begin(),target.end());
        while(pq.top() != 1){
            int x = pq.top();
            pq.pop();
            sum -= x;
            if(x<= sum || sum < 1)return 0;
            x = x%sum;
            sum += x;
            pq.push(x ? x: sum);
        }
        return true;
    }
};
