class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        bool a=true,b=true,c=true,d=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]!=target[i][j])a=false;//same matrixes
                if(mat[i][j]!=target[n-j-1][i])b=false;//one 90 degree rotation
                if(mat[i][j]!=target[n-i-1][n-j-1])c=false;//two 90 degree rotation
                if(mat[i][j]!=target[j][n-i-1])d=false;//3 90 degree rotation
            }
        }
        return (a||b||c||d);
    }
};