class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count = 0;
        int size = INT_MIN;
        int low = 0;
        int high=0;
        while(high< nums.size()) {
            if (nums[high] == 0) {
                count++;
            }
            while (count > k) {
                if(nums[low]==0)
                {
                    count--;
                }
                low++;
            }
high++;
size=max(size,high-low);

        }
        return size;
    }
};