class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mpp;

        for(auto it: strs){
            vector<int> freq(26, 0);
            // cout << it << " ";
            for(auto i:it) {
                freq[i-'a']++; 
                // cout << i << " ";
            }
            mpp[freq].push_back(it);
        }

        vector<vector<string>> ans;

        for(auto it:mpp){
            vector<string> c;
            for(auto i:it.second){
                // cout << it.second[0] << " ";
                c.push_back(i);
            }
            ans.push_back(c);
        }
        return ans;
    }
};
