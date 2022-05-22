class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        if(nums.size()==1)return 1;
        while(high>=low){
            int mid=low+(high-low)/2;
            if(mid%2==0 && ((nums[mid]!=nums[mid+1])&&mid==0)||((nums[mid]!=nums[mid-1])&&mid==nums.size()-1)||(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]))return nums[mid];
            if(mid%2==0){
                if(nums[mid]==nums[mid-1])high=mid-1;
                else low=mid+1;
            }
            else if(mid%2!=0){
                if(nums[mid]==nums[mid+1])high=mid-1;
                else low=mid+1;
            }
        }
        return -1;
    }
};