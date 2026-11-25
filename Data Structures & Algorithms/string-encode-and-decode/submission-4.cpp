class Solution {
public:
    const char start = 'A';
    const char ending = 'E';

    string encode(vector<string>& strs) {
        string ans = "";

        for(auto it: strs){
            for(auto i: it){
                ans += start;
                ans += i;
            }
            ans += ending;
        }
        cout << ans << " ";
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string temp = "";
        for(int i=0; i<s.size();){
            if(s[i] == start){
                temp += s[i+1];
                i += 2;
            }
            if(s[i] == ending){
                ans.push_back(temp);
                temp = "";
                i++;
            }
        }
        return ans;
    }
};
