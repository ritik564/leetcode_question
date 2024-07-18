class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int ,int>ans;
        vector<int>count;
        int n = nums.size();

        if (n == 0) {
            return count;  // Return empty vector for empty input
        }

        if (n == 1) {
            return nums;  // Return the single element if only one element
        }
        if (n == 2) {
            if (nums[0] == nums[1]) {
                return vector<int>{nums[0]};
            } else {
                return nums;
            }
        }

        int x = n/3;
        for(int i=0;i<nums.size();i++)
        {
            ans[nums[i]]++;
        }

        for(auto it: ans)
        {
            if(it.second > x)
            {
                count.push_back(it.first);
            }
        }
        return count;
    }
};