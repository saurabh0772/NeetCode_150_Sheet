class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size()) return "";

        unordered_map<char, int> tfreq, sfreq;

        for(auto it: t) tfreq[it]++;

        int temp = -1, matched = 0, l =0, ans = INT_MAX;

        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            sfreq[ch]++;

            if(tfreq[ch] > 0 && sfreq[ch] <= tfreq[ch]) matched++;
            
            while(t.size() == matched){
                if(i-l+1 < ans){
                    ans = i-l+1;
                    temp = l;
                }
                sfreq[s[l]]--;
                
                if(tfreq[s[l]] > 0 && sfreq[s[l]] < tfreq[s[l]]) matched--;
                l++;

            }
        }
        cout << temp << " " << ans << endl;
        return (temp == -1)?"" : s.substr(temp, ans);
    }
};
