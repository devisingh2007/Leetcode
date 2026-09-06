class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count =0;

    

        for(auto a : logs) {
            if(a == "../") {
                if(count>0) count--;
            } else if(a=="./")
            {

            }else {
                count++;
            }
        }

         

        return count;
    }
};