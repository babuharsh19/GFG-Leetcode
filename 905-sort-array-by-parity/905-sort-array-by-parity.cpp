class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>res(n+1);
        for(int i=0,j=0,k=n;i<=n;i++)
        {
            if((nums[i]%2)==0){
                res[j]=nums[i];
                j++;
            }
            else{
                res[k]=nums[i];
                k--;
            }
        }
        return res;
    }
};