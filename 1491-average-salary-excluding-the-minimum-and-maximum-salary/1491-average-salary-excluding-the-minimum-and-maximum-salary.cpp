class Solution {
public:
    double average(vector<int>& salary) {
        long long int mini=INT_MAX;
       long long int maxi=INT_MIN;
       long long int sum=0;
        int n=salary.size()-2;
        for(auto a:salary)
        {
            sum+=a;
            maxi=max(maxi,(long long )a);
            mini=min(mini,(long long )a);
        }
long double avg=sum-(mini+maxi);
        return avg/n;
    }
};