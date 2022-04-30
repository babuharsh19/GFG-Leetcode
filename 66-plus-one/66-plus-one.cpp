class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1;
        while(i>=0)
        {
            if(digits[i]<9){
                digits[i]+=1;
                return digits;
            }
            digits[i]=0;
            i--;
        }
        if(digits[0]==0){
            vector<int>v(n+1,0);
            v[0]=1;
            return v;
        }
        return digits;
    }
};