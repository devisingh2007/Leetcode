class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;

        // Count frequency
        for(auto a : nums) {
            mp[a]++;
        }

        int duplicate = -1, missing = -1;
        int n = nums.size();

        
        for(auto a : mp) {
            if(a.second == 2) {
                duplicate = a.first;
                break;
            }
        }

        
        for(int i = 1; i <= n; i++) {
            if(mp.find(i) == mp.end()) {
                missing = i;
                break;
            }
        }

        ans.push_back(duplicate);
        ans.push_back(missing);
        return ans;
    }
};
