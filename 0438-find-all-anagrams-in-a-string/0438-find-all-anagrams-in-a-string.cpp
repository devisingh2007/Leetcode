class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int a=s.size();
        int b=p.size();
        int low=0;
        int high=b-1;
        vector<int> ans;
        vector<int> sCount(26,0),pCount(26,0);
        if(a<b) return ans;

        for(auto c:p)
        {
            pCount[c-'a']++;
        }

        for(int i=0; i<b; i++)
        {
            sCount[s[i]-'a']++;
        }
        if(sCount==pCount)
        {
            ans.push_back(0);
        }
while(high<a-1)
{
    sCount[s[low]-'a']--;
    sCount[s[high+1]-'a']++;
    if(sCount==pCount)
        {
            ans.push_back(low+1);
        }

        low++;
        high++;
}
        return ans;
    }
};