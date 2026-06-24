class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty())
            return 0;
        int res = 0, n = height.size();

        for(int i = 0 ; i < n ; ++i)
        {
            int left = height[i];
            int right = height[i];

            for(int j = 0 ; j < i ; ++j)
                left = max(left , height[j]);
            for(int j = i+1 ; j < n ; ++j)
                right = max(right , height[j]);
            
            res += (min(left , right) - height[i]) < 0 ? 0 :
             (min(left , right) - height[i]);
        }
        return res;
    }
};
