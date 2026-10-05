class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans (n+1, 0);

        for(int i=0; i<=n; i++){
            int a = i, ones = 0;
            while(a != 0){
                if(a&1) ones++;
                a = a>> 1;
            }
            ans[i] = ones;
        }
        return ans;
    }
};
