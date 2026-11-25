class Solution {
public:

    int waysToClimb(int index, int n, vector<int>& dp){

        if(index == n) return 1;
        if(index > n) return 0;

        if(dp[index] != -1) return dp[index];

        int way1 = waysToClimb(index + 1, n, dp);
        int way2 = waysToClimb(index + 2, n, dp);

        return dp[index] = way1 + way2;
    }

    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return waysToClimb(0, n, dp);
    }
};
