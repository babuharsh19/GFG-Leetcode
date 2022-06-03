class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(int i=columnTitle.length()-1;i>=0;i--){
                ans+=(int(columnTitle[i])-64)*pow(26,columnTitle.length()-1-i);
        }
        return ans;
    }
};