class Solution {
public:
    int mySqrt(int x) {
        for(long long i=1;i<=x;i++){
            if((i*i)==x)return int(i);
            if((i*i)>x)return int(i-1);
        }
        return 0;
    }
};