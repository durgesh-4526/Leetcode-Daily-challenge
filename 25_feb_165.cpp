class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1, v2;
        
        int num = 0;
        for(int i = 0; i <= version1.length(); i++) {
            if(version1[i] == '.' || i == version1.length()) {
                v1.push_back(num);
                num = 0;
            } else {
                num = num * 10 + (version1[i] - '0');
            }
        }
        
        num = 0;
        for(int i = 0; i <= version2.length(); i++) {
            if(version2[i] == '.' || i == version2.length()) {
                v2.push_back(num);
                num = 0;
            } else {
                num = num * 10 + (version2[i] - '0');
            }
        }
        
        int i = 0, j = 0;
        while(i < v1.size() && j < v2.size()) {
            if(v1[i] < v2[j])
                return -1;
            else if(v1[i] > v2[j])
                return 1;
            
            i++, j++;
        }
        
        while(i < v1.size()) {
            if(v1[i])
                return 1;
            i++;
        }
        
        while(j < v2.size()) {
            if(v2[j])
                return -1;
            j++;
        }
        
        return 0;
    }
};
