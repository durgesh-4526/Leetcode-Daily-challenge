class Solution {
public:
    int countOrders(int n) {
        int mod = 1e9 + 7;
        long res = 1;
        for(int i = 1; i < n; i++){
            int temp = i*2+1;
            temp = (temp * (temp + 1))/2;
            res = (res * temp) % mod;
			res %= mod;
        }
        return res;
    }
};
