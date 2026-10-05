class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero = 0;
        long long pro = 1;
        for(auto it:nums){
            if(it == 0) {
                zero++; continue;
            }
            pro *= it;
        }
        vector<int> ans(nums.size(), 0);
        if(zero > 1) return ans;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                ans[i] = pro;
            }else if(zero == 1 && nums[i] != 0){
                ans[i] = 0;
            }else{
                ans[i] = pro/nums[i];
            }
        }
        return ans;
    }
};
