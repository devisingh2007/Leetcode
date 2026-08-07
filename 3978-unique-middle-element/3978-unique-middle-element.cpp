class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        

        int n = nums.size();
        int mid = n / 2;
        int middle = nums[mid];
        
        int count = 0;
        for(int x : nums) {
            if(x == middle) count++;
        }
        return count == 1;
    }
};
