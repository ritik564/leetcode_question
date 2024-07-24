class Solution {
public:
    string reverseWords(string s) {
 reverse(s.begin(), s.end());

        int n = s.length();
        int start = 0, end = 0;

        while (end < n) {
            // Skip leading spaces
            while (end < n && s[end] == ' ') {
                end++;
            }

            if (end >= n) break;

            // Set start to the current end
            if (start != 0) s[start++] = ' ';

            

            // Find the end of the current word
            int word_start = start;
            while (end < n && s[end] != ' ') {
                s[start++] = s[end++];
            }

            // Reverse the current word
            reverse(s.begin() + word_start, s.begin() + start);
        }

        // Resize the string to remove trailing spaces
        s.resize(start);

        return s;
    }
};