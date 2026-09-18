class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sin=0;
        int dou=0;

        for(auto a:nums)
        {
            if(a>9)
            {
                dou+=a;
            }
            else
            {
                sin+=a;
            }
        }

        return sin!=dou;
    }
};