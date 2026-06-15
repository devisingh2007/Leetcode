class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;

        for (char c : s) {
            mp[c]++;
        }

        int check = mp.begin()->second;

        for (auto p : mp) {
            if (p.second != check)
                return false;
        }

        return true;
    }
};