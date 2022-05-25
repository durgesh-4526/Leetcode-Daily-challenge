class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
    
    
    // Sort the array in ascending order with first element and if first element is same sort in descending wrt to second element
    sort(envelopes.begin(), envelopes.end(), [](vector<int>& a, vector<int>& b) 
         -> bool {return a[0] == b[0] ? b[1] < a[1] : a[0] < b[0];});
    
    
    vector<int> tail;
    tail.push_back(envelopes[0][1]);

    // Now the problem becomes like Longest Increasing Subsequence which is solved in O(nlogn) time using lower bound or we can say the binary search
   for(int i=1;i<envelopes.size();i++){
           if(envelopes[i][1]>tail.back()){
               tail.push_back(envelopes[i][1]);

           }
           else if(envelopes[i][1]<tail.back()){
               auto it=lower_bound(tail.begin(),tail.end(),envelopes[i][1]);
               *it=envelopes[i][1];
           }
               
   }
    
    return tail.size();
    
}
};
