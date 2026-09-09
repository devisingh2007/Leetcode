class Solution {
public:
    bool isVowel(string s) {
        for (auto a : s) {
            if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
                a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
                return true;
            }
        }
        return false;
    }
    bool isVowel2(char a) {
        
            if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
                a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
                return true;
            
        }
        return false;
    }

    string toGoatLatin(string sentence) {
        string word;
        stringstream ss(sentence);
        vector<string> words;
        while (ss >> word) {
            words.push_back(word);
        }
        for (int i = 0; i < words.size(); i++) {

            if (!(isVowel2(words[i][0]))) {
                char a = words[i][0];
                words[i].erase(0, 1);
                words[i] += a;
            }
            
                words[i] += "ma";
            
            for (int j = 0; j <= i; j++) {
                words[i] += "a";
            }
        }
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            if (i > 0)
                result += " ";
            result += words[i];
        }
        return result;
    }
};