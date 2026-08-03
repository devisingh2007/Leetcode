class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        backtrack(nums, ans, curr);
        return ans;
    }

    void backtrack(vector<int>& nums, vector<vector<int>>& ans, vector<int>& curr){
        if(curr.size() == nums.size()){
            ans.push_back(curr);
            return;
        }
        for(int num : nums){
            if(find(curr.begin(), curr.end(), num) == curr.end()){
                curr.push_back(num);
                backtrack(nums, ans, curr);
                curr.pop_back();
            }
        }
    }
};