class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=INT_MIN;
        for(auto a:accounts)
        { int n=0;
            for(auto m:a)
            {
n+=m;
            }
            maxi=max(n,maxi);
        }
        return maxi;
    }
};