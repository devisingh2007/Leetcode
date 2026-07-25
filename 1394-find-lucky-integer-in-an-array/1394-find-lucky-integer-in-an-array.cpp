class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxi=0;
        unordered_map<int,int> mp;

        for(auto a:arr)
        {
            mp[a]++;
        }
        for(auto a:mp)
        {
            if(a.first==a.second)
            {
                maxi=max(maxi,a.first);
            }
        }
        if(maxi!=0)
        {
            return maxi;
        }
        return -1;
    }
};