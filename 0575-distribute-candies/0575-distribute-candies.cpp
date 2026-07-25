class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int type = 0;
        unordered_map<int, int> mp;
        for (auto a : candyType) {
            mp[a]++;
        }
        for (auto a : mp) {

            if (type >= candyType.size() / 2) {
                return type;
            } else {
                type++;
            }
        }
        return type;
    }
};