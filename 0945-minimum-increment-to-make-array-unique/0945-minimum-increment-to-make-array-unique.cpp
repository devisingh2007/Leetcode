class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int moves = 0;
        int prev = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= prev) {
                moves += (prev + 1 - nums[i]);
                nums[i] = prev + 1;
            }
            prev = nums[i];
        }
        return moves;
    }
};
