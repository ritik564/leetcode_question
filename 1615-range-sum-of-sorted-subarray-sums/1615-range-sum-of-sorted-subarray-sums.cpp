class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int MOD = 1e9+7;
        vector<long long>ans;
        long long add=0;
        for(int i=0;i<n;i++)
        {
            long long sum = 0;
            for(int j=i;j<n;j++)
            {
                sum = sum+nums[j];
                ans.push_back(sum);
            }
        }

        sort (ans.begin(),ans.end());
        for(int i=left-1;i<=right-1;i++)
        {
            add = (add+ans[i]) % MOD;
        }

        return static_cast<int>(add);
    }
};