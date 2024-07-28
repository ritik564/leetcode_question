class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int count = 0;

        for(char it:s)
        {
            if(it == '(')
            {
                if(count > 0)
                {
                    result += it;
                }
                 count++;
            }

            else
            {
                if(it == ')')
                {
                    if(count > 1)
                    {
                        result +=it;
                    }
                    count--;
                }
            }
        }
        return result;
    }
};        