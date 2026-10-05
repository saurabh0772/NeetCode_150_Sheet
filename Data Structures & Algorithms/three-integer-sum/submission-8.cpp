class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // set<vector<int>> s;
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++){
            int target = - (nums[i]);
            int j = i+1, k = n-1;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            while(j<k){
                int sum = nums[j] + nums[k];
                // if(nums[j] == nums[j-1]) continue;
                if(sum == target){
                    vector<int> t = {nums[i], nums[j], nums[k]};
                    // if(s.empty() || s.find(t) == s.end()){
                        ans.push_back(t);
                    // } 
                    j++; k--;
                    while(j < k && nums[j] == nums[j-1]) j++;
                }else if(sum < target) j++;
                else k--;

            }
        }

        return ans;
    }
};
