class Solution {
public:
    string compressedString(string word) {
        string ans;
        int i = 0;
        while (i < word.size()) {
            int count = 0;
            char c = word[i];
            while (i < word.size() && c == word[i]) {
                count++;
                i++;
                if(count>8) break;
            }
            ans += to_string(count);
            ans += c;
        }
        return ans;
    }
};