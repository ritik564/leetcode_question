class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int area=0;
        while(left<right)
        {
            int length=abs(left-right);
            int width=min(height[left],height[right]);
            int currentarea = length*width;
             area= max(area,currentarea);

            if(height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return area;
    }
};