class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        
        for(int l=n/2; l>=1; l--){
            if(n%l==0){
                int times=n/l;
                string pattern=s.substr(0,l);
                string newStr="";
                while(times>0){
                    newStr+=pattern;
                    times--;
                }
                if(newStr==s){
                    return true;
                }
            }
        }
        return false;
    }
};
