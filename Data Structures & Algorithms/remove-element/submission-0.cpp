class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)
            return 0;
        
        int i = 0, j = nums.size() - 1;
        int counter = 0;
        
        while(i <= j)
        {
            if(nums[i] != val)
            {
                i++;
                counter++;
            }
            else
            {
                while(j >= 0 && nums[j] == val && j >= i)
                    j--;
                if(j < i || j < 0)
                    break;
                std::swap(nums[i++], nums[j--]);
                counter++;
            }
        }

        return counter;
    }
};