class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mpp;

        for(auto it:nums) mpp[it]++;

        multimap<int, int> tpp;
        for(auto it:mpp){
            tpp.insert({it.second, it.first});
        }
        for(auto it:tpp){
            cout << it.first << " " << it.second << endl;
        }
        vector<int> ans;
        for(auto it = tpp.rbegin(); it!=tpp.rend() && k != 0; it++){
            ans.push_back(it->second); k--;
        }
        return ans;
    }
};
