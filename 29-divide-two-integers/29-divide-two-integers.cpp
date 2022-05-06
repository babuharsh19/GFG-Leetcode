class Solution {
public:
    // int divide(int dividend, int divisor) {
    //     if(dividend==INT_MIN && divisor ==-1)return INT_MAX;
    //     int res=0,k,i=0,b=divisor,a=dividend,x=0;
    //     divisor=abs(divisor);
    //     dividend=abs(dividend);
    //     while(dividend>=divisor)
    //     {
    //         for (x = 0; dividend - (divisor << x << 1) >= 0; x++);
    //         res += 1 << x;
    //         dividend -= divisor << x;
    //     }
    //     // res+=(1<<(i-1));
    //     if((b>0&&a>0)||(b<0&&a<0))return res;
    //     else return -res;
    // }
     int divide(int A, int B) {
        if (A == INT_MIN && B == -1) return INT_MAX;
        long long a = abs(A), b = abs(B), res = 0, x = 0;
        while (a - b >= 0) {
            for (x = 0; a - (b << x << 1) >= 0; x++);
            res += 1 << x;
            a -= b << x;
        }
        return (A > 0) == (B > 0) ? res : -res;
    }
};
