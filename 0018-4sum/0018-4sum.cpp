
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if (nums.size() < 4) return ans; // Early return if there are less than 4 numbers

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Avoid duplicates for the first number

            for (int j = i + 1; j < nums.size() - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Avoid duplicates for the second number

                int k = j + 1;
                int l = nums.size() - 1;

                while (k < l) {
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[l];

                    if (sum < target) {
                        k++;
                    } else if (sum > target) {
                        l--;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;

                        while (k < l && nums[k] == nums[k - 1]) k++; // Avoid duplicates for the third number
                        while (k < l && nums[l] == nums[l + 1]) l--; // Avoid duplicates for the fourth number
                    }
                }
            }
        }

        return ans;
    }
};

