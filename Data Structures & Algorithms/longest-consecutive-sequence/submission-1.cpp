class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return n;
        sort(nums.begin(), nums.end());
        int maxlen = 1, len = 1;
        int prev = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(prev == nums[i]) continue;
            else if(prev == nums[i]-1) {
                len++; maxlen = max(maxlen, len);
                
            }else{
                len = 1;
            }
            prev = nums[i];
        }
        return maxlen;
    }
};
