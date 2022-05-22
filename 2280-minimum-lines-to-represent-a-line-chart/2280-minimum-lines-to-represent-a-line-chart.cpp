class Solution {
public:
    static bool sortcol(const vector<int>& v1, const vector<int>& v2)
    {
        return v1[0] < v2[0];
    }
    int minimumLines(vector<vector<int>>& stockPrices) {
        sort(stockPrices.begin(),stockPrices.end(),sortcol);
        int count=1;
        if(stockPrices.size()==1)return 0;
            for(int i=2;i<stockPrices.size();i++){
                long long int x1=((stockPrices[i][1]-stockPrices[i-1][1])*1ll*(stockPrices[i-1][0]-stockPrices[i-2][0])*1ll);
                long long int x2=((stockPrices[i-1][1]-stockPrices[i-2][1])*1ll*(stockPrices[i][0]-stockPrices[i-1][0])*1ll);
                    if(x1!=x2){
                        count++;
                    }
                }
        return count;
    }
};