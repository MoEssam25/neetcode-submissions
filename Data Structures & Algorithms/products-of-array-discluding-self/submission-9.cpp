class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();

        vector<int>pre(size + 2, 1);
        vector<int>post(size + 2, 1);
        vector<int>output(size, 1);

        for (int i = 1; i <= size; i++)
            pre[i] = pre[i - 1] * nums[i-1];
        
        for (int i = size; i >= 1; i--)
            post[i] = post[i + 1] * nums[i-1];
        
        for (int i = 0; i < size; i++)
            output[i] = pre[i] * post[i+2];
        
        return output;
    }
};