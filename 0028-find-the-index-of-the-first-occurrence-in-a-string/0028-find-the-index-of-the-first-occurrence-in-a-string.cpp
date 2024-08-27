class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystacksize = haystack.size();
        int needlesize = needle.size();

        for(int i=0;i<=haystacksize-needlesize;i++)
        {
            int count=0;
            for(int j=0;j<needlesize;j++)
            {
                if(haystack[i+j] != needle[j])
                {
                    break;
                }
                count++;
            }
            if(count == needlesize)
            {
                return i;
            }
        }
        return -1;
    }
};