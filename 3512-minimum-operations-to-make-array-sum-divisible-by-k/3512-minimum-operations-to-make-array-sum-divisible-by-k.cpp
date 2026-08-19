class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(auto a:nums)
        {
            sum+=a;
        }
        int count=0;
        while(sum%k!=0)
        {
            count++;
            sum--;
        }
        return count;
    }
};