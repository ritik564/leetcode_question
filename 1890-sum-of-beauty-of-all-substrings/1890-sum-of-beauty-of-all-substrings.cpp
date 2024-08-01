class Solution {
public:
    int beautySum(string s) {
        int sum=0;

        for(int i=0;i<s.size();i++)
        {
            unordered_map<char,int>ans;
            for(int j=i;j<s.size();j++)
            { 
                ans[s[j]]++;

                int leastfrequent = INT_MAX;
                int mostfrequent = INT_MIN;

                for(auto it:ans)
                {
                    leastfrequent = min(leastfrequent , it.second);
                    mostfrequent = max(mostfrequent , it.second);
                }
                sum = sum+(mostfrequent - leastfrequent);
            }
        }

        return sum;
    }
};