class Solution {
public:
    int duplicateInArray(vector<int>& nums) {
        if (nums.empty())
            return -1;
        sort(nums.begin(), nums.end());
        if (nums[0] < 0 || nums[nums.size() - 1] > nums.size() - 1)
            return -1;
        for (int i = 0; i < nums.size() - 1; i ++) {
            int j = i + 1;
            if (nums[i] == nums[j])
                return nums[i];
        }
        return -1;
    }
};
