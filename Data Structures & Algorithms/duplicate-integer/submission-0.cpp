class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto it:nums){
            s.insert(it);
        }

        return (s.size() < nums.size())? true : false;
    }
};