class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        unordered_map<int,int>m;
        sort(nums.begin(),nums.end());
        if(nums.size()<3)return res;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        for(int i=0;i<nums.size()-2&&nums[i]<=0;i++){
            for(int j=i+1;j<nums.size()-1;j++)
            {
                    auto it=m.find(-1*(nums[i]+nums[j]));
                    if(it!=m.end()&&it->second>j){
                        res.push_back({nums[i],nums[j],it->first});
                        m[it->first]=j;
                    }
            }
        }
        return res;
    }
};