class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long int maxi = INT_MIN;
        long long int sum = 0;
        int low = 0;
        int high = k - 1;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        maxi = sum;
        while (high < nums.size() - 1) {
            sum += nums[high + 1] - nums[low];
            maxi = max(maxi, sum);
            low++;
            high++;
        }
        return (double)maxi / k;
    }
};