class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string s = "";

        while(n!=0){
            s += to_string(n&1);
            n = n >> 1;
        }
        // cout <<s << endl;
        int len = s.size();
        uint32_t ans = 0;
        int rem = 32 - len;
        
        for(int i=len-1; i>=0; i--){
            if(s[i] == '1'){
                ans += pow(2, rem);
            }
            rem++;
        }
        return ans;
    }
};
