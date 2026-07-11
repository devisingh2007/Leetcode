class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()==2) return -1;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    
    for(int a:nums)
    {
        maxi=max(maxi,a);
        mini=min(mini,a);

    }
for(int a:nums)
{
    if(a!=maxi&&a!=mini)
    return a;
}
        return -1;
    }
};