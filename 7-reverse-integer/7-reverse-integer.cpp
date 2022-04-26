class Solution {
public:
    int reverse(int x) {
        int rev=0,k=abs(x);
        while(k>0){
            if((rev<=(-pow(2,31))/10)||(rev>=(pow(2,31))/10)) return 0;
            rev = (rev*10)+(k%10);
            k=k/10;
        }
        if((rev<=(-pow(2,31)))||(rev>=(pow(2,31)))) return 0;
        if(x<0) return -rev;
        return rev;
    }
};