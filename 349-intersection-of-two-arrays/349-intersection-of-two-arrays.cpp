class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int s1=0,s2=0;
        vector<int>res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(s1<nums1.size()&&s2<nums2.size())
        {
            if(s1>0&&nums1[s1]==nums1[s1-1]){
                s1++;
                continue;
            }
            if(nums1[s1]==nums2[s2]){
                res.push_back(nums1[s1]);
                s1++;
                s2++;
            }
            else if(nums1[s1]<nums2[s2]){
                s1++;
            }
            else{
                s2++;
            }
    }
        return res;
    }
};