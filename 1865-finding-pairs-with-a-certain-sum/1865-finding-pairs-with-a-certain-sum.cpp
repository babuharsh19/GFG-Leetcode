class FindSumPairs {
public:
    vector<int>n2;
    map<int,int>m1;
    unordered_map<int,int>m2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        n2=nums2;
        for(int i=0;i<n2.size();i++){
            m2[n2[i]]++;
        }
        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]]++;
        }
    }
    void add(int index, int val) {
        m2[n2[index]]--;
        n2[index]+=val;
        m2[n2[index]]+=1;
    }
    int count(int tot) {
        int cnt=0;
        for(auto i=m1.begin();i!=m1.end()&&i->first<=tot;i++){
            if(m2[tot-i->first]){
                cnt+=m2[tot-i->first]*i->second;
            }
        }
        return cnt;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */