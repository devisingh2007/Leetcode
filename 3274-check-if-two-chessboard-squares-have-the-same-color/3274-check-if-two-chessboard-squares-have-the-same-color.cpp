class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
          int a1=coordinate1[0]-'a';
          int a2=coordinate1[1]-'0';
        
          int b1=coordinate2[0]-'a';
          int b2=coordinate2[1]-'0';
bool ans1=(a1+a2)%2==0;
bool ans2=(b1+b2)%2==0;
         
return ans1==ans2;
    }
};