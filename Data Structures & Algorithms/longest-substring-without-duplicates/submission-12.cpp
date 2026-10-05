class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;

        int l = 0, ans = 0;
        for(int i=0; i<s.size(); i++){
            while(st.find(s[i]) != st.end()){
                st.erase(s[l]); l++;
            }
            st.insert(s[i]);
            ans = max(ans, static_cast<int>(st.size()));
        }
        return ans;
    }
};
