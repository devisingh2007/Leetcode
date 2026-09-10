class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> ans;
      int i = 1; 
        while (ans.size() < k) {
            if (find(arr.begin(), arr.end(), i) == arr.end()) {
                ans.push_back(i);
            }
            i++;
        }
        return ans[k-1];
    }
};