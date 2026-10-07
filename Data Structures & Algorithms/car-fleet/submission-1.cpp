class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> vp;
        int n = position.size();

        for(int i=0; i<n; i++){
            vp.push_back(make_pair(position[i], speed[i]));
        }

        sort(vp.begin(), vp.end());

        vector<float> res;

        for(int i=0; i<n; i++){
            float remDistance = target - vp[i].first; 
            float time = remDistance / vp[i].second;

            res.push_back(time);
        }

        stack<float> st;

        for(int i=0; i<res.size(); i++){
            if(st.empty() || st.top() > res[i]){
                st.push(res[i]);
            }else{
                while(!st.empty() && st.top() <= res[i]) st.pop();
                st.push(res[i]);
            }
        }

        // size_t totalElements = ;
        
        return st.size();
    }
};
