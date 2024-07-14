class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++)
        {
            int ans = nums[i];
            for(int j=i;j<n;j++)
            {
                if(ans == nums[j])
                {
                    count++;
                }
            }

            if(count > (n/2))
            {
                return ans;
            }
            else{
                count = 0;
            }

        }
        return 0;
    }
};