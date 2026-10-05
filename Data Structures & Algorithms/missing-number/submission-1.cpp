class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a = 0, b = 0;

        for(int i=0; i<nums.size(); i++){
            a ^= nums[i];
        }
        for(int i=0; i<nums.size()+1; i++){
            b ^= i;
        }
        return a^b;
    }
};
