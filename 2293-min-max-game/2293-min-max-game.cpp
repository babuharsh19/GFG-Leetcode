class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int minimum=INT_MAX;
        while(nums.size()!=1){
            vector<int>temp;
            bool even=true;
            for(int i=1;i<nums.size();i+=2){
                if(even==true){
                    temp.push_back(min(nums[i-1],nums[i]));
                    even=false;
                }
                else{
                    temp.push_back(max(nums[i-1],nums[i]));
                    even=true;
                }
            }
            nums=temp;
        }
        return nums[0];
    }
};