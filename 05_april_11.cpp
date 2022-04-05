class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;
        int i = 0;
        int j = height.size()-1;
        while (i<j)
        {
            int a = 0;
            if(height[i]<height[j]){
                a = height[i]*(j-i);
                i++;
            }else{
                a = height[j]*(j-i);
                j--;
            }
            if(maxi<a){
                maxi = a;
            }
          
        }
        return maxi;
    }
};
