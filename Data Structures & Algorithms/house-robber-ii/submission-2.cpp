class Solution {
public:
    int robber(int index, int n, vector<int>& nums, vector<int>& dp){
        if(index >= n) return 0;

        if(dp[index] != -1) return dp[index];
        int chori = nums[index] + robber(index + 2, n, nums, dp);
        int noChori = robber(index + 1, n, nums, dp);

        return dp[index] = max(chori, noChori);
    }

    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];

        vector<int> num1, num2, dp1(nums.size()-1, -1), dp2(nums.size()-1, -1);

        for(int i=0; i<nums.size(); i++){
            if(i != 0) num1.push_back(nums[i]);
            if(i != nums.size()-1) num2.push_back(nums[i]);
        }
        return max(robber(0, num1.size(), num1, dp1), robber(0, num2.size(), num2, dp2));
    }
};
