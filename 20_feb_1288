bool mysort(vector<int> i,vector<int> j){
  if(i[0] == j[0]){
    return i[1] > j[1];
  }
    return i[0]<j[0];
}
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), mysort);
        int ans = 0;
        int max = 0;
        for (int i = 0; i < intervals.size(); i++)
        {
            if(intervals[i][1] > max){
                
                max= intervals[i][1];
                ans++;

            }
        }
        return ans;
    }
};
