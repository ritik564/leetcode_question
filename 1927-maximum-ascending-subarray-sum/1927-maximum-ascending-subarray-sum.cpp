class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        int answer = 0;

        if(n == 1)
        {
            return nums[0];
        }
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] < nums[i+1])
            {
                sum = sum+nums[i];
            }
            else
            {
                sum = sum+nums[i];
                answer =max(answer,sum);
                sum = 0;
            }
        }
        if(nums[n-1] > nums[n-2])
        {
            sum = sum+nums[n-1];
            answer = max(answer,sum);
        }
        return answer;
    }
};