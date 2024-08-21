class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(),piles.end());
        int low = 1;
        int result = high;

        while(low <= high)
        {
            long long count = 0;
            int mid = low+(high-low)/2;

            for(int i=0;i<piles.size();i++)
            {
                count += (piles[i] + mid - 1) / mid;
            }

            if(count <= h)
            {
                result = mid;
                high = mid-1;
            }
            else if(count > h)
            {
                low = mid+1;
            }
        }
        return result;
    }
};