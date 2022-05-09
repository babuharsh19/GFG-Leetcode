class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        vector<int>v(2,-1);
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]<target){
               start=mid+1; 
            }
            else if(nums[mid]>target){
               end=mid-1; 
            }
            else{
                if((mid==0||nums[mid]!=nums[mid-1])&&v[0]<0)
                    v[0]=mid;
                if((mid==nums.size()-1||nums[mid]!=nums[mid+1])&&v[1]<0)
                    v[1]=mid;
                if(v[0]>=0){
                    start=mid+1;
                    end=nums.size()-1;
                }
                else
                    end=mid-1;
            }
        }
        return v;
    }
};