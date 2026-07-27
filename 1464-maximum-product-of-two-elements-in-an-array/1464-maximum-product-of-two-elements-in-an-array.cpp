class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        for (auto a : nums) {
            if (max1 < a) {
                max2 = max1;
                max1 = a;
            } else if (max2 < a) {
                max2 = a;
            }
        }
        return (max1 - 1) * (max2 - 1);
    }
};