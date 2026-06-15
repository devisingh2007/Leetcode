class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.size();
        int k = p.size();

        if (n < k) return ans;

        vector<int> pFreq(26, 0);
        vector<int> window(26, 0);

        for (char c : p)
            pFreq[c - 'a']++;

        int left = 0;

        for (int right = 0; right < n; right++) {

            window[s[right] - 'a']++;

            if (right - left + 1 > k) {
                window[s[left] - 'a']--;
                left++;
            }

            if (right - left + 1 == k && window == pFreq) {
                ans.push_back(left);
            }
        }

        return ans;
    }
};