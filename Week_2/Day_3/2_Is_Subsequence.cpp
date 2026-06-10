class Solution {
public:
    bool isSubsequence(string s, string t) {
        string s1="";
        int idx=0;
        for(int i=0; i<t.size(); i++){
            if(t[i]==s[idx]){
                s1+=s[idx];
                idx++;
            }
        }
        return s1==s;
    }
};
