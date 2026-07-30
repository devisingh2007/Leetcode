class Solution {
public:
    int compress(vector<char>& chars) {
        string ans;
        int n = chars.size();
        int i = 0;
        while (i < n) {
            int count = 0;
            char a = chars[i];

            while (i < n && a == chars[i]) {
                count++;
                i++;
            }
            ans += a;
            if (count != 1)
                ans += to_string(count);
        }
        for (auto a : chars) {
            chars.pop_back();
        }
        for (auto a : ans) {
            chars.push_back(a);
        }

        return ans.size();
    }
};