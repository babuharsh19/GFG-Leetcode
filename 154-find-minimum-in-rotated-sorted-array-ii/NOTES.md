using set but slower solution..
class Solution {
public:
int findMin(vector<int>& nums) {
unordered_set<int>temp(nums.begin(),nums.end());
vector<int>v(temp.begin(),temp.end());
sort(v.begin(),v.end());
int low=0,high=v.size()-1,mid=0;
while(low<high){
mid=low+(high-low)/2;
if(v[mid]>v[high]){
low=mid+1;
}
else{
high=mid;
}
}
return v[low];
}
};