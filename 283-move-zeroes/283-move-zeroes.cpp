class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count0=count(nums.begin(),nums.end(),0);
        remove(nums.begin(),nums.end(),0);
        for(int i=1;i<=count0;i++){
            nums[nums.size()-i]=0;
        }
    }
};