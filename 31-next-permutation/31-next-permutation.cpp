class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k=-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
               k=i;
                break;
            }
        }
        if(k>=0){
            int temp=INT_MAX,index=0;
            for(int j=k-1;j<nums.size();j++){
                if((nums[j]>nums[k-1])&&nums[j]<=temp){
                    temp=nums[j];
                    index=j;
                }
            }
            swap(nums[k-1],nums[index]);
            sort(nums.begin()+k,nums.end());
        }
        else{
            reverse(nums.begin(),nums.end());
        }
    }
};