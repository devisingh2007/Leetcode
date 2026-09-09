class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq, first, last;
        int degree = 0;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            freq[x]++;
            if (first.find(x) == first.end())
                first[x] = i;

            last[x] = i;
            degree = max(degree, freq[x]);
        }

        int ans = nums.size();
        for (auto& p : freq) {
            if (p.second == degree) {
                ans = min(ans, last[p.first] - first[p.first] + 1);
            }
        }
        return ans;
    }
};
