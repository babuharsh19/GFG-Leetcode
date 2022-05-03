class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a="",b="";
        for(int i=0;i<s.length();i++){
            if((s[i]=='#')){
                if(a.length()!=0)
                    a.pop_back();
            }
            else{
                a+=s[i];
            }
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#'){
                if(b.length()!=0)
                    b.pop_back();
            }
            else{
                b+=t[i];
            }
        }
        if(a==b)return true;
        else return false;
    }
};