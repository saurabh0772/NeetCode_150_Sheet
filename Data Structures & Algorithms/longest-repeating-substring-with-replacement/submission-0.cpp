class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mpp;
        int l = 0, ans = -1, len = 0, hfreq = 0;

        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
            hfreq = max(hfreq, mpp[s[i]]);

            if((i-l+1) - hfreq > k){
                mpp[s[l]]--;
                l++;
            }
            ans = max(ans, i - l + 1);
        }
        return ans;
    }
};
