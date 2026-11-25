class Solution {
public:
    int robber(int index, int n, vector<int>& nums, vector<int>& dp){
        if(index >= n) return 0;

        if(dp[index] != -1) return dp[index];

        int currentHouseChori = nums[index] + robber(index+2, n, nums, dp);
        int currentHouseChoriSkip = robber(index + 1, n, nums, dp);

        return dp[index] = max(currentHouseChori, currentHouseChoriSkip);
    }

    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return robber(0, nums.size(), nums, dp);
    }
};
