#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int temp = 0;
        int sum = 0;
        unordered_map<int,int>m;
      m[0]++;
        for (int i = 0; i < nums.size(); i++)
        {
            temp += nums[i];
            if(m.find(temp-k) != m.end()){
                sum += m[temp-k];
            }
            m[temp]++;
        }return sum;
    }
};
int main()
{
    
    return 0;
}