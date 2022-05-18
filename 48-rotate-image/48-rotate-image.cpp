class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //reverse rows
        // reverse(matrix.begin(),matrix.end());

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //reverse column
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};