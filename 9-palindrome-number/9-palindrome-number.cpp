class Solution {
public:
    bool isPalindrome(int x) {
        string rev="";
        int t=x;
        if(t==0)return true;
        while(x>0){
            rev+=to_string(x%10);
            x=x/10;
        }
        if(t<0)return false;
        else{
            return rev==to_string(t);
        }
    }
};