class Solution {
public:
    int romanToInt(string s) {
        int value = 0;
        unordered_map<char,int>ans{
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };

        for(int i=0;i<s.size();i++)
        {
            if(ans[s[i]] < ans[s[i+1]])
            {
                value = value - ans[s[i]];
            }
            else
            {
                value = value + ans[s[i]];
            }
        }
        return value;
    }
};