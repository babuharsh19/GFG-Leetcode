class Solution {
public:
    //naive approach
    // int majorityElement(vector<int>& nums) {
    //     int count=1,element=nums[0];
    //     sort(nums.begin(),nums.end());
    //     for(int i=1;i<nums.size();i++)
    //     {
    //        if(nums[i]==nums[i-1]){
    //            count++;
    //            element=nums[i];
    //            if(count>(nums.size()/2))return element;
    //        } 
    //         else{
    //             count=1;
    //             element=nums[i];
    //         }
    //     }
    //     return element;
    // }
    //optimize approach using more's voting algorithm
    
    int majorityElement(vector<int>& nums) {
        int count=1,n=nums.size(),element=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]==element)
            {count++;}
            else{count--;}
            if(count==0)
            {
                count=1;
                element=nums[i];
            }
        }
        return element;
    }
};