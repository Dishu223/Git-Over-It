class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 , right = height.size()-1;
        int maxArea = 0;

        while(left < right)
        {
            int width = right - left;
            int curr_area = width * min(height[left], height[right]);

            maxArea = max(maxArea, curr_area);

            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxArea;
    }
};