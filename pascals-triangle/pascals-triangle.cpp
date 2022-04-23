class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v(numRows);
        if(numRows==1){v[0]={1}; return v;}
        if(numRows==2){v[0]={1};v[1]={1,1}; return v;}
        v[0]={1};v[1]={1,1};
        for(int i=2;i<numRows;i++){
            v[i].push_back(1);
            for(int j=1;j<i;j++){
                v[i].push_back(v[i-1][j-1]+v[i-1][j]);
            }
            v[i].push_back(1);
        }
        return v;
    }
};