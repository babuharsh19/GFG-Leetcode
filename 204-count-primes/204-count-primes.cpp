class Solution {
public:
    int countPrimes(int n) {
        vector<int>v(n,1);
        if(n==0||n==1)return 0;
        v[0]=0,v[1]=0;
        for(int i=2;i*i<n;i++){
            if(v[i]==1){
                for(int j=i*2;j<n;j=j+i){
                    v[j]=0;
                }
            }
        }
        return count(v.begin(),v.end(),1);
    }
};