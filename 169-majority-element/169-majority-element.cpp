class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1,element=nums[0];
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
           if(nums[i]==nums[i-1]){
               count++;
               element=nums[i];
               if(count>(nums.size()/2))return element;
           } 
            else{
                count=1;
                element=nums[i];
            }
        }
        return element;
    }
};