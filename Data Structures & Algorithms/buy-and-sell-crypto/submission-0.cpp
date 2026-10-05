class Solution {
public:
    int maxProfit(vector<int>& p) {
        int prev = p[0], ans = 0, tempmax = 0;

        for(int i=1; i<p.size(); i++){
            if(p[i] < prev){
                ans = max(ans, p[i] - prev);
                prev = p[i];
                // if(tempmax <= ans){
                //     tempmax = p[i] - ans;
                //     ans = max(ans, tempmax);
                // }
               
            }else{
                ans = max(ans, p[i] - prev);
            }
        }
        return ans;
    }
};
