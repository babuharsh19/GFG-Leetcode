class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int curr_pos=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[curr_pos]=nums[i];
                curr_pos++;
            }
        }
        return curr_pos;
    }
};