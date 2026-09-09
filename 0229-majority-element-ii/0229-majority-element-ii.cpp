class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        vector<int> ans;
        for (int num : nums) {
            mp[num]++;
        }
        for (auto a : mp) {
            if (a.second > n / 3)
                ans.push_back(a.first);
        }

        return ans;
    }
};