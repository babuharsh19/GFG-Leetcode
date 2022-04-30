class Solution {
public:
vector<int> plusOne(vector<int>& digits) {
int n= digits.size()-1;
if(digits[n]<9){
digits[n]+=1;
return digits;
}
else
{
while((digits[n]==9)){
digits[n]=0;
if(n==0)break;
n--;
}
if(n>0)digits[n]+=1;
if(n==0){
if(digits[0]==0){
vector<int>v(digits.size()+1,0);
v[0]=1;
return v;
}
else{
digits[0]+=1;
}
}