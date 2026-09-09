class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int dsum=0;

        for(auto a: nums)
        {
            sum+=a;
            while(a!=0)
            {
                dsum+=a%10;
                a=a/10;
            }
        }
return abs(sum-dsum);
    }
};