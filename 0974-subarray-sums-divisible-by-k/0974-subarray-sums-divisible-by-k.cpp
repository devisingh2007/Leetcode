class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        freq[0] = 1; 

        int prefixSum = 0;
        int count = 0;

        for(int num : nums) {
            prefixSum += num;

            int rem = ((prefixSum % k) + k) % k;

            count += freq[rem];

            freq[rem]++;
        }

        return count;
    }
};
