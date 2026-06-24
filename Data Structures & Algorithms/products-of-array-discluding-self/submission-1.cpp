class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int Size = nums.size();

        vector <int> prefix(Size , 1);
        vector <int> postfix(Size , 1);

        prefix[0] = nums[0];
        for (int i = 1; i < Size; i++)
        {
            prefix[i] = prefix[i - 1] * nums[i];
        }

        postfix[Size - 1] = nums[Size - 1];
        for (int i = Size - 2; i >= 0; i--)
        {
            postfix[i] = postfix[i + 1] * nums[i];
        }

        for (int i = 0; i < Size; i++)
        {
            if (i == 0)
            {
                nums[i] = postfix[i + 1];
            }
            else if (i == (Size - 1))
            {
                nums[i] = prefix[i - 1];
            }
            else
            {
                nums[i] = prefix[i - 1] * postfix[i + 1];
            }
        }
        return nums;
    }
};
