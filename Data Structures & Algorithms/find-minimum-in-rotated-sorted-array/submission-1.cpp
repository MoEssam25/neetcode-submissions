class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0, right = nums.size()-1, res = nums[0];

        while(left <= right)
        {
            // 4 5 1 2 3
            int mid = (left + right) / 2;
            if(nums[left] < nums[right])
            {
                res = min(res , nums[left]);
                break;
            }

            res = min(res , nums[mid]);

            if(nums[mid] > nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }

        return res;

    }
};
