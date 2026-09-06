class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char,int>mp;
        int c=0;
        for(auto a:s)
        {
            mp[a]++;
        }

          for(auto a:mp)
        {
            c++;
        }
        return c;
    }
};