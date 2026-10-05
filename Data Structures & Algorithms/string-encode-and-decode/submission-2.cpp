class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";

        for(auto it:strs){
            ans += it;
            ans += "#";
            ans += to_string(it.size());
            // cout << ans << " ";
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string temp = "";
        cout << s << " ";
        int len = 0;
        for(int i=0; i<s.size(); i++){
            // cout << s[i] ;
            if(s[i] != '#'){
                temp += s[i]; len++;
            }else{
                if(s[i+1] >= '0' && s[i+1] <= '9'){
                    ans.push_back(temp);
                    temp = ""; 
                    if(len < 10) i++;
                    else i += 2;
                    len = 0;
                }else{
                    temp += s[i]; len++;
                }
                
            }
        }
        return ans;
    }
};
