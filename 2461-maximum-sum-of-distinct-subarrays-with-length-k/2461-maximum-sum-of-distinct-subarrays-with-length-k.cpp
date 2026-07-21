class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
       long long int maxi = 0;
        long long int sum = 0;
        int low = 0;
        int high = k - 1;

        for (int i = 0; i < k; i++) {
            mp[nums[i]]++;
            sum += nums[i];
        }
        if (mp.size() == k) {
            maxi = max(maxi, sum);
        }

        while (high < nums.size() - 1) {
            mp[nums[low]]--;
            if(mp[nums[low]]==0)
            {
                mp.erase(nums[low]);
            }
            mp[nums[high + 1]]++;
                sum += nums[high + 1] - nums[low];
            if (mp.size() == k) {
              
            maxi=max(maxi,sum);
            }
            low++;
            high++;
        }
        return maxi;
    }
};