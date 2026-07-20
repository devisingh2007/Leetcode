class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0;
        int sum=0;
        int low=0;
        int high=k-1;

        for(int i=0; i<k; i++)
        {
            sum+=arr[i];
        }
        if(sum/k>=threshold)
        {
            count++;
        }
        while(high<arr.size()-1)
        {
            sum+=arr[high+1]-arr[low];
            if(sum/k>=threshold)
            {
                count++;
            }
            low++;
            high++;
        }
        return count;
    }
};