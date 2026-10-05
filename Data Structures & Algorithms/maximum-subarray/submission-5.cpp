class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0, n = nums.size(), ans = nums[0];
        if(n == 1) return nums[0];
        if(nums[0] > 0) sum = nums[0];
        for(int i=1; i<n; i++){
            if(sum + nums[i] < 0){
                 ans = max(ans, sum + nums[i]);
                 sum = 0;
            }
            else{
                sum += nums[i];
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};
