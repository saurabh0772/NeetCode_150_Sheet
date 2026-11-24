class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mpp;

        for(auto it: nums){
            mpp[it]++;
        }

        priority_queue<pair<int, int>> maxHeap;
        for(auto [num, count] : mpp){
            maxHeap.push({count, num});
        }

        vector<int> ans;
        while(k > 0 && !maxHeap.empty()){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
            k--;
        }
        return ans;
    }
};
