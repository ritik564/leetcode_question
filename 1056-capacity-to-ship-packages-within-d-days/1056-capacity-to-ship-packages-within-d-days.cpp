class Solution {
public:
    int packages( const vector<int>weights,int mid,int high, int low)
    {
        int sum = 0;
        int count=1;
        for(int i=0;i<weights.size();i++)
        {
            if(sum+weights[i] > mid)
            {
                count++;
                sum = 0;
            }
            sum =sum+weights[i];
        }
        return count;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(), weights.end(),0);
        
        while(low <= high)
        {
            int mid = low+(high-low)/2;
            int sol = packages(weights,mid,high,low);

            if(sol <= days)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return low;
    }
};