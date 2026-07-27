class Solution {
public:
    int findMin(vector<int>& nums) {
       int mini=INT_MAX;
for(int a:nums)
{
    mini=min(a,mini);
}
       return mini; 
    }
};