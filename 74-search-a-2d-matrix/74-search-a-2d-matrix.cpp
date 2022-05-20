class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size(),low=0,high=m*n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int row=mid/n,column=mid%n;
            // while(column/n>0){
            //     column=column%n;
            //     row++;
            // }
            if(matrix[row][column]==target)return true;
            else if(matrix[row][column]>target)high=mid-1;
            else low=mid+1;
        }
        return false;
        
    }
};