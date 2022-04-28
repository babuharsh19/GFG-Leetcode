class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)return 1;
        double m=myPow(x,abs(n)/2);
        double k=m*m;
        if(n>=0){
            if(n%2==0)return k;
            else return k*x;
        }
        else{
            if(n%2==0)return 1/k;
            else return 1/(k*x);
        }
    }
};