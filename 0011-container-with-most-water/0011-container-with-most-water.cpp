class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0,high=height.size()-1;
        int maxarea=0;
        while(low<high)
        {
            int currentarea=min(height[low],height[high])*(high-low);
            maxarea=max(maxarea,currentarea);
            if(height[low]<=height[high])
                low++;
            else
                high--;
        }
        return maxarea;
    }
};