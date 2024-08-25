class Solution {
public:
    int divisor(int mid,int high,int low,const vector<int>nums)
    {
        int count = 0;
        for(int i=0;i<nums.size();i++)
        {
            int sum = (nums[i]+mid-1) / mid;
            count = sum + count;
        }
        return count;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {
        int high = *max_element(nums.begin(),nums.end());
        int low = 1;
        int ans = high;

        while(low <= high)
        {
            int mid = low + (high-low)/2;
            int sol = divisor(mid,high,low,nums);
            
            if(sol <= threshold)
            {
                high = mid -1;
            }
            else 
            {
                low = mid +1;
            }
        }
        return low;
    }
};