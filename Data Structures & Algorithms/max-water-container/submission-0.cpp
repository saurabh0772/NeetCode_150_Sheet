class Solution {
public:
    int maxArea(vector<int>& h) {
        int i = 0, n = h.size(), j = n-1;
        int len = n-1, maxwater = 0;
        while(i < j){
            maxwater = max(maxwater, len * min(h[i], h[j]));
            len--;
            if(h[i] > h[j]) j--;
            else if(h[i] < h[j]) i++;
            else{
                if(h[i+1] > h[j-1]) i++;
                else j--;
            }
        }

        return maxwater;

    }
};
