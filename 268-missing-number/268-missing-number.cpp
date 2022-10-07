class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=-1;
        for(int i=0;i<nums.size();++i){
            if(nums[i]<nums.size()){
                if(i!=nums[i]){
                swap(nums[i],nums[nums[i]]);
                i--;
                }
            }
            if(i>=0 && i!=nums[i]){res=i;}
        }
        if(res==-1)res=nums.size();
        return res;
    }
};