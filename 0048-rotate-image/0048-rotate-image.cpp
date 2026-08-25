class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     
int right=matrix.size()-1;

vector<vector<int>> copy=matrix;
for(int i=0; i<=right; i++)
{
for(int j=0; j<=right; j++)
{
    matrix[i][j]=copy[j][i];
}
}
 for(int i=0; i<=right; i++)
 {
    reverse(matrix[i].begin(),matrix[i].end());
 }
 

    }
};