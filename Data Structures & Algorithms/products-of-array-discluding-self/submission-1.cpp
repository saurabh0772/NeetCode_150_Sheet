class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroes = 0, prod = 1;

        for(auto it: nums) {
            if(it == 0) zeroes++;
            else{
                prod *= it;
            }
        }

        vector<int> ans(nums.size(), 0);

        if(zeroes >= 2){
            return ans;
        }else if(zeroes == 1){
            int ind = -1;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] == 0){
                    ind = i; break;
                }
            }
            ans[ind] = prod;
        }else{
            ans = nums;
            for(int i=0; i<nums.size(); i++){
                ans[i] = prod / ans[i];
            }
        }

        return ans;
    }
};
