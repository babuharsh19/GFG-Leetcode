class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int>m;
        for(int i=0;i<matrix.size();i++){
            bool k=false;
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    k =true;
                    m[j]=i;
                }
                if((k==true)&&j==matrix[i].size()-1){
                    matrix[i]=vector<int>(matrix[i].size(),0);
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                auto it=m.find(j);
                if(it!=m.end())matrix[i][j]=0;
            }
        }
    }
};