class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        unordered_map<int,int> freq;
        vector<vector<int>> ans;

        for(int x : nums) {
            freq[x]++;
        }


        for(auto p : freq) {

            int num = p.first;
            int count = p.second;

            for(int i = 0; i < count; i++) {

                if(ans.size() <= i) {
                    ans.push_back({});
                }

                ans[i].push_back(num);
            }
        }

        return ans;
    }
};