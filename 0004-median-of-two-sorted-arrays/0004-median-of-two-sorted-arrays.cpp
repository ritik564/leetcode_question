class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i=0;
        int j=0;
        int k= n+m;
        vector<float>ans;

        while(i<n && j<m)
        {
            if(nums1[i] < nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i<n)
        {
            ans.push_back(nums1[i]);
            i++;
        }
        
        while(j < m)
        {
            ans.push_back(nums2[j]);
            j++;
        }

        if(k % 2 == 1)
        {
            k=k/2;
            return ans[k];
        }

        float answer=0;
        k=k/2;
        answer = ans[k]+ans[k-1];
        answer = answer/2;

        return answer;
    }
};