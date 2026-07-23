class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=0; j<nums[i]; j++)
            {
                ans.push_back(nums[i+1]);
            }
            i++;
        }
        return ans;
    }
};