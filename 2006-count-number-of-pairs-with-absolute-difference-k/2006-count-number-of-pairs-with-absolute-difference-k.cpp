class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int count=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
        }
        // unordered_set<int>s(nums.begin(),nums.end());
        // copy(s.begin(),s.end(),nums.begin());
        for(int i=0;i<nums.size();i++){
            auto it=m.find(nums[i]+k);
            
            if(it!=m.end()){
                count+=it->second;
            }
        }
        return count;
    }
};