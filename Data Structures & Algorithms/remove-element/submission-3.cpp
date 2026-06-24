class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // [0,1,4,0,3,0,4,2], val = 2
        //            in
        int i = 0, n = nums.size();
        while (i < n) {
            if (nums[i] == val) {
                nums[i] = nums[--n];
            } else {
                i++;
            }
        }
        return n;
    }
};