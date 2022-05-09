// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1,end=n;
        while(start<=end){
            int mid=start+(end-start)/2;
            if((isBadVersion(mid)==true)&&isBadVersion(mid-1)==true)
            {
                end=mid-1;
            }
            else if(isBadVersion(mid)==false){
                start=mid+1;
            }
            else{
                return mid;
            }
            
        }
        return 0;
    }
};