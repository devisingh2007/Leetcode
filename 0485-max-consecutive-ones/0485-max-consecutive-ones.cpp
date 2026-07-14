class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int count = 0;
        int maxi = 0;
        while (ans < nums.size()) {
            if (nums[ans] == 1) {
                count++;
            maxi = max(maxi, count);
            }
           else count=0;


            ans++;
        }
        return maxi;
    }
};