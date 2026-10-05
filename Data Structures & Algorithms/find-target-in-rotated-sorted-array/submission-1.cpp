class Solution {
public:
    int search(vector<int>& nums, int key) {
        int n = nums.size();
        if(n == 1){
            if(nums[0] == key) return 0;
            else return -1;
        }
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

        int a = nums[0], b = nums[pv-1], c = nums[pv], d = nums[n-1];

        if(pv == -1){
            lo = 0; hi = n-1;
        }else if(key >= a && key <= b){
            lo = 0; hi = pv - 1;
        }else{
            lo = pv; hi = n-1;
        }
        
        while(lo <= hi){
            int mid = (lo+hi)/2;
            if(nums[mid] == key) return mid;

            if(nums[mid] < key) lo = mid + 1;
            else hi = mid - 1;
        }
        return -1;
    }
};
