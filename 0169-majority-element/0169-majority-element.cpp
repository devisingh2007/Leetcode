class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(auto a:nums)
       {
        mp[a]++;
       } 
       int maxel=0;
       int maxi=INT_MIN;
       for(auto a:mp)
       {
if(a.second>maxi)
{
    maxi=a.second;
    maxel=a.first;
}
       }
       return maxel;
    }
};