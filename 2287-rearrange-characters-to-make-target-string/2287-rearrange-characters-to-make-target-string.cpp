class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int minimum=INT_MAX;
        for(int i=0;i<target.length();i++){
            int temp=count(s.begin(),s.end(),target[i]);
            int k=s.find(target[i]);
            if(k>=0&&k<s.length())
                s.erase(k,1);
            minimum=min(minimum,temp);
            if(i==0)minimum/=count(target.begin(),target.end(),target[i]);
        }
        return minimum;
    }
};