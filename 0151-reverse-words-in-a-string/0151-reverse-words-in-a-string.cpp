class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
string word;
vector<string> w;
        while(ss>>word)
        {
            w.push_back(word);
        }
        reverse(w.begin(),w.end());
        string result="";
        for(int i=0; i<w.size(); i++)
        {
            if(i>0) result+=" ";
            result+=w[i];
        }
        return result;
    }
};