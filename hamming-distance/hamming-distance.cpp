class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        unsigned int k=(x^y);
        while(k>0){
            k=k&(k-1);
            count++;
        }
        return count;
    }
};