class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128, 0); 

        for (char c : t) {
            freq[c]++;
        }

        int l = 0; 
        int r = 0;
        int count = t.size();
        int minLen = INT_MAX; 
        int start = 0; 

        while (r < s.size()) {
           
            if (freq[s[r]] > 0) {
                count--;
            }

            freq[s[r]]--; 
            r++;

            while (count == 0) {
                
                if (r - l < minLen) {
                    minLen = r - l;
                    start = l;
                }

                freq[s[l]]++;

               
                if (freq[s[l]] > 0) {
                    count++;
                }
                l++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};