class Solution {
public:
    int possible(vector<int>nums, int mid)
    {
        int count = 1;
        int ans = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]+ans <= mid)
            {
                ans = nums[i]+ans;
            }
            else
            {
                count++;
                ans = nums[i];
            }
        }
        return count;
    }


    int splitArray(vector<int>& nums, int k) {
        int high = accumulate(nums.begin(),nums.end(),0);
        int low = *max_element(nums.begin(),nums.end());
        
        while(low <= high)
        {
            int mid = low+(high-low)/2;
            int temp = possible(nums,mid);
            if(temp <= k)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1; 
            }
        }
        return low;
    }
};