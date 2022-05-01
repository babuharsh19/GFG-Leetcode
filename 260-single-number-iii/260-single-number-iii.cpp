class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unsigned int xor1=0;
            int k=0,n=nums.size(),x=0;
        if(n<=2) return nums;
        vector<int>res(2);
        for(int i=0;i<n;i++)
        {
            xor1=xor1^nums[i];
        }
        xor1=xor1&-xor1;//finding right most set bit of xor
        for(int i=0;i<n;i++)
        {
            if(xor1&nums[i])
            {
                x=x^nums[i];
            }
            else
            {
                k=k^nums[i];
            }
        }
        res[0]=x;
        res[1]=k;
        return res;
    }
};