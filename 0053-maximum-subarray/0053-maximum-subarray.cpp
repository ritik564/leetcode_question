class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = 0;
        int sum = 0;
        int count = 0;
        int largest = nums[0];
        if(nums.size() == 1)
        {
            return nums[0];
        }

        for(int i=0; i<nums.size(); i++)
        {
            sum = sum + nums[i];

            if(sum < 0)
            {
                sum = 0;
                count++;
            }

            if(sum > ans )
            {
               ans = sum; 
            }
        }

        if(count == nums.size())
        {
            for(int i =0;i<nums.size();i++)
            {
                if(largest < nums[i])
                {
                    largest = nums[i];
                }
            }
            return largest;
        }

        return ans;
   
    }
};