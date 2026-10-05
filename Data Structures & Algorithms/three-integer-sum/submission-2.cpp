class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> ans;
        map<int, int> mpp;
        int i = 0;
        for(auto it: nums){
            mpp[it] = i;
            i++;
        }
        int n = nums.size();
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                int rem = 0 - nums[i] - nums[j];
                if(mpp.find(rem) != mpp.end()){
                    int ind = mpp[rem];
                    if(ind > j){
                        vector<int> tri = {nums[i], nums[j], rem};
                        sort(tri.begin(), tri.end());
                        if(s.empty()){
                            s.insert(tri);
                            ans.push_back(tri);
                        }else if(s.find(tri) == s.end()){
                            s.insert(tri);
                            ans.push_back(tri);
                        }
                    }
                }
            }
        }
        return ans;
    }
};
