class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>res(nums.begin(),nums.end());
        return nums.size()>res.size();
    }
};