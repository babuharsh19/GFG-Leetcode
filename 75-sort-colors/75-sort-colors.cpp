class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        for(int i=0;i<nums.size()-1;i++){
            bool swapped = false;
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j+1],nums[j]);
                    swapped=true;
                }
            }
            if(swapped==false)break;
        }
    }
};