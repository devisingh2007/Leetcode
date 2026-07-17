class Solution {
public:
    int findLHS(vector<int>& nums) {
        int count = 0;
       int maxi=0;
       unordered_map<int,int> mp;
       for(int i=0; i<nums.size();i++)
       {
        mp[nums[i]]++;
       }

       for(auto i:mp)
       {
        int a=i.first;
        if(mp.count(a+1))
        {

        maxi=max(maxi,mp[a]+mp[a+1]);
        }
       }
        return maxi;
    }
};