class Solution {
public:

bool isVovel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u';
}

    int maxVowels(string s, int k) {
        int low = 0;
        int high = k - 1;
        int maxi = 0;
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (isVovel(s[i])) {
                count++;
            }
        }
        maxi=count;
        while(high<s.size()-1)
        {
            if (isVovel(s[low])) {
                count--;
            }
            if(isVovel(s[high+1]))
            {
                count++;
            }
            low++;
            high++;

            maxi=max(maxi,count);
        }
        return maxi;
    }
};