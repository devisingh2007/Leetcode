class Solution {
public:
    int averageValue(vector<int>& nums) {
    int ans=1;
    int count=0;
    int sum=0;
    for(int a:nums)
    {
        if(a%2==0)
        {
            if(a%3==0)
            {

            sum+=a;
            count++;
            }
        }
    }
    if(count==0) return 0;
    
    ans=sum/count;
    return ans;
    }
};