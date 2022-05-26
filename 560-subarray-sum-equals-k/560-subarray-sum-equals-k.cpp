class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            auto it=m.find(sum-k);
            if(sum==k)count++;
            if(it!=m.end())count+=it->second;
            m[sum]++;
        }
        return count;
    }
};