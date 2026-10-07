class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> vp;
        int n = position.size();

        for(int i=0; i<n; i++){
            vp.push_back(make_pair(position[i], speed[i]));
        }

        sort(vp.begin(), vp.end());

        stack<double> st;
        for(int i=0; i<n; i++){
            double remDistance = target - vp[i].first; 
            double time = remDistance / vp[i].second;

            if(st.empty() || st.top() > time){
                st.push(time);
            }else{
                while(!st.empty() && st.top() <= time) st.pop();
                st.push(time);
            }

        }
        
        return st.size();
    }
};
