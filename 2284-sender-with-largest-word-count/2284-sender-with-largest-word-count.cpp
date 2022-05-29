class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int>m;
        int k=0;
        string s;
        for(int i=0;i<senders.size();i++){
            int cont=count(messages[i].begin(),messages[i].end(),' ')+1;
            m[senders[i]]+=cont;
        }
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second>=k){
                k=i->second;
                s=i->first;
            }
        }
        return s;
    }
};