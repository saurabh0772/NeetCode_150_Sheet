class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0, n = height.size();
        int p_max[n], s_max[n];
        p_max[0] = height[0]; s_max[n-1] = height[n-1];

        for(int i=1; i<n; i++){
            p_max[i] = max(p_max[i-1], height[i]);
        }

        for(int i=n-2; i>=0; i--){
            s_max[i] = max(s_max[i+1], height[i]);
        }

        for(int i=0; i<n; i++){
            int currentWater = min(p_max[i], s_max[i]) - height[i];

            if(currentWater > 0) water += currentWater;
        }

        return water;
    }
};
