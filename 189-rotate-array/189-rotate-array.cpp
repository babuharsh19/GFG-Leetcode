class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size())k%=nums.size();
        for(int i=0;i<nums.size()/2;i++){
            swap(nums[i],nums[nums.size()-1-i]);
        }
        for(int i=0;i<k/2;i++){
            swap(nums[i],nums[k-i-1]);
        }
        int j=0;
        for(int i=k;i<(k+((nums.size()-k)/2));i++){
            swap(nums[i],nums[nums.size()-j-1]);
            j++;
        }
    }
};