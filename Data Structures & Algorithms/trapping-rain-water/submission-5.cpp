class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size(), res = 0, compare = -1;
        vector<int>leftmax(n,0);
        vector<int>rightmax(n,0);
        
        for (int i = 1; i < n; ++i) {
            leftmax[i] = max(leftmax[i - 1], height[i - 1]);
        }

        for (int i = n - 2; i >= 0; --i) {
            rightmax[i] = max(rightmax[i + 1], height[i + 1]);
        }

        for(int i = 0 ; i < n ; ++i)
            res += max(0, min(leftmax[i], rightmax[i]) - height[i]);

        return res;
    }
};
