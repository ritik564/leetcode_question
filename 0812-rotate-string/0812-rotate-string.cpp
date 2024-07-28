class Solution {
public:
    bool rotateString(string s, string goal) {
        
        
        for(int i=1;i<=s.size();i++)
        {
            for(int j=0;j<1;j++)
            {
                s=s+s[j];
            }
            s.erase(0,1);
            if(s == goal)
            return true;

        }
        return false;
    }
};