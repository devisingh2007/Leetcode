class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(auto a: nums)
        {
int n=0;
while(a!=0)
{
    a=a/10;
    n++;

}
if(n%2==0) c++;
        }
        return c;
    }
};