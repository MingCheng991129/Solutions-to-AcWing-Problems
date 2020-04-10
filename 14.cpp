class Solution {
public:
    int duplicateInArray(vector<int>& nums) {
        if (nums.empty())
            return -1;
        if (nums.size() == 1)
            return nums[0];
     
        for (int left = 0; left < nums.size() - 1; left ++) {
            for (int right = left + 1; right < nums.size(); right ++) {
                if (nums[left] == nums[right])
                    return nums[left];
            }
        }
        return -1;
    }
};
