//this problem will be done using prefix multiplication method. by //making left and right prefix arrays.
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>answer(nums.size());
        int product=1,n=nums.size();
        answer[0]=nums[0];
        for(int i=1;i<n;i++)
        {
          product*=nums[i-1];
          answer[i]=product;
        }
        product =1;
        for(int i=n-2;i>0;i--)
        {
            product*=nums[i+1];
            answer[i]*=product;
        }
        answer[0]=(product*nums[1]);
        return answer;
    }
};