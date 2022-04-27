class Solution {
public:
    bool checkPerfectNumber(int num) {
        int x=1;
        if(num==1) return false;
        for(int i=2;i*i<num;i++){
            if(num%i==0){
                x+=(i+(num/i));
            }
        }
        return true?x==num:false;
    }
};