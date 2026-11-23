class Solution {
public:
    int maxArea(vector<int>& height) {
        int Area = -1;
        int i = 0;
        int j = height.size() - 1;

        while(i < j)
        {
            Area = std::max(((j-i) * std::min(height[i], height[j])), Area);
            if(height[i] < height[j])
                i++;
            else
                j--;
        }

        return Area;
    }
};