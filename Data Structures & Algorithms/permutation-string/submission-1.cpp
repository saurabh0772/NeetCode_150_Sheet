class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        
        vector<int> v1(26,0), v2(26,0);

        for(int i=0; i<s1.size(); i++){
            v1[s1[i] - 'a']++;
            v2[s2[i] - 'a']++;
        }
        int st_ind = 0;
        for(int i=s1.size(); i<s2.size(); i++){
            if(v1 == v2) return true;
            v2[s2[st_ind] - 'a']--;
            st_ind++;
            v2[s2[i] - 'a']++;
        }

        return (v1 == v2) ? true : false;
    }
};
