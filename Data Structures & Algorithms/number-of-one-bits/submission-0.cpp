class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans =0;
        // cout << a << endl;
        while(n != 0){
            if(n&1) ans++;
            n = n >> 1;
        }
        
        return ans;
    }
};
