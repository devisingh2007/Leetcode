class Solution {
public:
    bool sorted(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1])
                return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int sum = 0,minsum=0;
        if (sorted(nums))
            return 0;
int count=0;

while(!sorted(nums))
{
    int ind=0;
        minsum = nums[0] + nums[1];
        for (int i = 1; i < nums.size() - 1; i++) {
            sum = nums[i] + nums[i + 1];
            if (sum<minsum)
            {
                minsum=sum;
                ind=i;
            }
        }

        nums[ind]=minsum;
        nums.erase(nums.begin()+ind+1);
        count++;

}
        return count;
    }
};