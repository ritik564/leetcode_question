class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         
        int n = nums.size();

        if(n == 0)
        {
         return 0;
        }

        int count = 0;
        int largest = 1;

        unordered_set<int>ans;

        for(int i=0;i<n;i++)
        {
            ans.insert(nums[i]);
        }

        for(auto it: ans)
        {
            if(ans.find(it-1) == ans.end())
            {
                count = 1;
                int x = it;

                while(ans.find(x+1) != ans.end())
                {
                    x = x+1;
                    count += 1;
                }   
                largest = max(largest , count);
            }
        }    
        return largest;
    }
};