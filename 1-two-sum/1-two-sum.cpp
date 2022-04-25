class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res(2);
        for(int i=0;i<nums.size();i++){
            int k=target-nums[i];
            auto it=find(nums.begin(),nums.end(),(k));
            if((it!=nums.end())&&it-nums.begin()!=i){
                res[0]=i;
                res[1]=it-nums.begin();
            }
        }
        return res;
    }
};