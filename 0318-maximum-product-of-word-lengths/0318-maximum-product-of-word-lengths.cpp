class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            unordered_set<char> s;

            for (char c : words[i]) {
                s.insert(c);
            }

            for (int j = i + 1; j < n; j++) {
                bool common = false;

                for (char c : words[j]) {
                    if (s.count(c)) {
                        common = true;
                        break;
                    }
                }

                if (!common) {
                    ans = max(ans,
                              (int)words[i].size() *
                              (int)words[j].size());
                }
            }
        }

        return ans;
    }
};