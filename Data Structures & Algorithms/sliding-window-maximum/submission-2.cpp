class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq; // front contain max ele index, back contain min, insertion and deletion at back, deletion at back if out of window

        for(int i=0; i<nums.size(); i++){
            // remove out of window index
            if(!dq.empty() && dq.front() < i - k + 1) dq.pop_front();

            // remove smaller
            while(!dq.empty() && nums[dq.back()] < nums[i]) dq.pop_back();

            // insert at back
            dq.push_back(i);

            if(i >= k - 1) ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};
