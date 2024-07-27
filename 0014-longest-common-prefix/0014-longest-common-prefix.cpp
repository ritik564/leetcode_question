class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Find the string with the minimum length
        int minLength = strs[0].length();
        for (const string& str : strs) {
            if (str.length() < minLength) {
                minLength = str.length();
            }
        }

        string ans;
        for (int i = 0; i < minLength; ++i) {
            char currentChar = strs[0][i];
            for (int j = 1; j < strs.size(); ++j) {
                if (strs[j][i] != currentChar) {
                    return ans;
                }
            }
            ans += currentChar;
        }
        
        return ans;
    }
};
