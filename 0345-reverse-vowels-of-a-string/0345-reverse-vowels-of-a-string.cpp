class Solution {
public:
    string reverseVowels(string s) {
        vector<char>ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
            {
                ans.push_back(s[i]);
            }
        }

        reverse(ans.begin(),ans.end());

        int i=0;
        int j=0;
        while(i < s.size())
        {
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
            {
                swap(s[i],ans[j]);
                j++;
            }
            i++;
        }
        
        return s;
    }
};