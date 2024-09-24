class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1; // Initialize count as 1 because we are already comparing the first char
        vector<char> answer;
        char cmp = chars[0]; // Start with the first character

        for (int i = 1; i <= chars.size(); i++) {
            if (i < chars.size() && chars[i] == cmp) {
                count++;
            } else {
                answer.push_back(cmp); // Add the character
                if (count > 1) {
                    string countStr = to_string(count); // Convert count to string
                    for (char c : countStr) {
                        answer.push_back(c); // Add each digit of the count
                    }
                }
                if (i < chars.size()) {
                    cmp = chars[i]; // Update the current character
                    count = 1; // Reset count for the next group
                }
            }
        }

        // Modify the original chars array in place
        for (int i = 0; i < answer.size(); i++) {
            chars[i] = answer[i];
        }

        return answer.size(); // Return the length of the compressed array
    }
};
