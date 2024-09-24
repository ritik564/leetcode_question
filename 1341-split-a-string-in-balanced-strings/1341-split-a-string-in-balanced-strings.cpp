class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int no = 0;

        for(int i=0;i<s.length();i++)
        {
            if(s[i] == 'L')
            {
                no++;
            }
            else
            {
                no--;
            }

            if(no == 0)
            {
                count++;
            }
        }
    return count;
    }
};