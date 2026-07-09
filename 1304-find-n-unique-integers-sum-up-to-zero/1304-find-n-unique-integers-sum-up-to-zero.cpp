class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;

        int i = 1;

        if (n % 2 != 0)
            ans.push_back(0);
        for (int a = 0; a < n / 2; a++) {

            ans.push_back(i);
            ans.push_back(-i);
            i++;
        }
        return ans;
    }
};