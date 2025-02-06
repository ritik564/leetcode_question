class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>freq;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                freq[nums[i]*nums[j]]++;
            }
        }


        int ans = 0;
        
        for(auto it : freq)
        {
            int x = it.second;
            int comb = (x*(x-1))/2;

            ans = ans + 8 * comb;
        }

        return ans;
    
    }
};