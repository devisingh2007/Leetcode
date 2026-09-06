class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
string ans;
        for(auto a:s)
        {
            if(a=='*')
            {
                st.pop();
            }else
            {
                st.push(a);
            }
        }

        while(!st.empty())
        {
ans+=st.top();
st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};