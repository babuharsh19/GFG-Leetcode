class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int m=matrix.size(),n=matrix[0].size();
        int startrow=0,endcolumn=n-1,endrow=m-1,startcolumn=0;
        if(matrix.size()==1){
            for(int i=0;i<n;i++){
                    v.push_back(matrix[0][i]);
                }
                return v;
        }
        if(matrix[0].size()==1){
            for(int i=0;i<m;i++){
                v.push_back(matrix[i][0]);
            }
            return v;
        }
        while(endrow>=startrow&&endcolumn>=startcolumn){
            for(int i=startcolumn;i<=endcolumn;i++){
                v.push_back(matrix[startrow][i]);
            }
            startrow++;
            for(int i=startrow;i<=endrow;i++){
                v.push_back(matrix[i][endcolumn]);
            }
            endcolumn--;
            if(startrow<=endrow){
            for(int i=endcolumn;i>=startcolumn;i--){
                v.push_back(matrix[endrow][i]);
            }
            }
            endrow--;
            if(startcolumn<=endcolumn){
            for(int i=endrow;i>=startrow;i--){
                v.push_back(matrix[i][startcolumn]);
            }
            startcolumn++;
            }
        }
        return v;
        
    }
};