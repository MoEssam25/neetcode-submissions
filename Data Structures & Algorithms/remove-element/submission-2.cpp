class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        // [0 , 1 , 3 , 2 , 3 , 0 , 4 , 2], val = 2
        //              k       i
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] != val)
                nums[k++] = nums[i];
        }

        return k;
    }
};