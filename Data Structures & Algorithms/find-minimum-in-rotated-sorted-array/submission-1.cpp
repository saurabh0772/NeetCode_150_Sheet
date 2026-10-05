class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int lo = 0, hi = n-1, pv = -1, minn=  1002;
        int first = nums[0];
        while(lo <= hi){
            int mid = (lo + hi)/2;

            if(nums[mid] < first){
                hi = mid -1;
                if(minn >= nums[mid]){
                    minn = nums[mid];
                    pv = mid;
                }
            }else{
                lo = mid + 1;
            }
        }

        if(pv == -1) return first;

        return nums[pv];
    }
};
