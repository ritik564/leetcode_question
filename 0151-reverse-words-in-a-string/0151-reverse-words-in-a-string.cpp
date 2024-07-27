class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0;
        int j = 0;
        string w;
        string result;

        while(i < n)
        {
         while(i<n && s[i] == ' ')
         {
            i++;
         }
        j=i;

         while(j<n && s[j] != ' ')
         {
            j++;
         }

        if(i < j)
        {
            w = s.substr(i,j-i);
            if(result.empty())
            {
            result = w;
            }
            else
            {
            result = w+" "+result;
            }
        }
        i=j+1;
        }


        return result;
    }
};