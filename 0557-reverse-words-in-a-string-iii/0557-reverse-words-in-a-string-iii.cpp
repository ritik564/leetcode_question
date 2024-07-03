class Solution {
public:
    string reverseWords(string s) {
        int r=0,l=0;
        while(r < s.length())
        {
            while(l < s.length() && s[l] != ' ')
            {
                l++;
            }
            reverse(s.begin()+r, s.begin()+l);
            r = l+1;
            l = r;
        }
        return s;
    }
};