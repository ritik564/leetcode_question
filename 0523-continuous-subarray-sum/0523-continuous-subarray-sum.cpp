
class Solution {
public:
    bool checkSubarraySum(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> remainderIndexMap;
        remainderIndexMap[0] = -1; // Initialize with 0 remainder at index -1
        int cumulativeSum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            cumulativeSum += nums[i];
            int remainder = cumulativeSum % k;

            // If remainder is negative, make it positive


            if (remainderIndexMap.find(remainder) != remainderIndexMap.end()) {
                if (i - remainderIndexMap[remainder] > 1) {
                    return true;
                }
            } else {
                remainderIndexMap[remainder] = i;
            }
        }

        return false;
    }
};

