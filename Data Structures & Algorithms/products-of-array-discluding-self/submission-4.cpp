class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int Size = nums.size();

        vector <int> res(Size);

        vector <int> prefix(Size , 1);
        vector <int> suffix(Size , 1);

        prefix[0] = 1;
        suffix[Size - 1] = 1;
        for (int i = 1; i < Size; i++)
        {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }
        for (int i = Size - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }
        for (int i = 0; i < Size; i++)
        {
            res[i] = prefix[i] * suffix[i];
        }

        return res;
    }
};
