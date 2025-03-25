class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int j;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == nums[i+1])
            {
                j = nums[i];
                break;
            }
        }
        return j;
    }
};