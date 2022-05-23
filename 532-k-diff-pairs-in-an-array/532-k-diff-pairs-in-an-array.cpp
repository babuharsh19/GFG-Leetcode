class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            m[(nums[i])]+=1;
        }
        set<int>s(nums.begin(),nums.end());
        copy(s.begin(),s.end(),nums.begin());
        for(int i=0;i<s.size();i++){
            int temp=1;
            if(nums[i]<0)temp=-1;
            auto it = m.find(((nums[i])+k));
            if(k==0&&it!=m.end()&&(it->second)>=2){
                        count++;
                }
            if(it!=m.end()&&k>0){
                count++;
            }
        }
        return count;
    }
};