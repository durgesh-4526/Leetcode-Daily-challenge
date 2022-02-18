class Solution {
public:
    string removeKdigits(string num, int k) {
        string res = "";
        int index = 0;
        for(int i=num.size()-k;i>0;i--){
            int tmp = INT_MAX;
			// window set
            for(int j=index;j<num.size()-i+1;j++){
                if(num[j] < tmp){
                    index = j;
                    tmp = num[j];
                }
            }
            if(res.size() != 0 || (res.size() == 0 &&num[index] != '0')){
                 res += num[index];
            }
            index++;
        }
        return res.size() > 0 ? res : "0";
    }
};
