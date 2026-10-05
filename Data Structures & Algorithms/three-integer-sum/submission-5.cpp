class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++){
            int target = - (nums[i]);
            int j = i+1, k = n-1;

            while(j<k){
                int sum = nums[j] + nums[k];

                if(sum == target){
                    vector<int> t = {nums[i], nums[j], nums[k]};
                    if(s.empty() || s.find(t) == s.end()){
                        s.insert(t); ans.push_back(t);
                    } 
                    j++;
                }else if(sum < target) j++;
                else k--;

            }
        }

        return ans;
    }
};
