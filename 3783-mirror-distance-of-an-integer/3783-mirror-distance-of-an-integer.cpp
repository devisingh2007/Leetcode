class Solution {
public:
    int mirrorDistance(int n) {
       long long int ans=0;
        int a=n;
        while(n!=0)
        {
            ans=ans*10+n%10;
            n=n/10;
        }
        return abs(a-ans);
    }
};