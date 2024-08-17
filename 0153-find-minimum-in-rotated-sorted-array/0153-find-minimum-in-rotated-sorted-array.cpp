class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        int high = nums.size()-1;
        int low = 0;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(nums[mid] >= nums[low])
            {
                ans = min(ans,nums[low]);
                low = mid+1;
            }
            else
            {
                ans = min(ans,nums[mid]);
                high = mid-1;
            }

        }
        return ans;
    }
};