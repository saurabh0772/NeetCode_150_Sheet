class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // count every char inside the string and store the str to that count
        map<vector<int>, vector<string>> mpp;

        for(int i=0; i<strs.size(); i++){
            vector<int> ch(26,0);
            for(auto it: strs[i]){
                ch[it - 'a'] += 1;
            }

            mpp[ch].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for(auto it: mpp){
            vector<string> temp;
            for(auto p: it.second) {
                temp.push_back(p);
            }
            ans.push_back(temp);
        }

        return ans;
    }
};
