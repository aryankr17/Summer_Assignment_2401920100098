class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {
        int n=s1.length();
        int m=s2.length();

        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        vector<int> ans;

        for(char ch:s1){
            freq1[ch-'a']++;
        }
        
        int i=0,j=0;
        while(j<m){
            freq2[s2[j]-'a']++;
            if((j-i+1)>n){
                freq2[s2[i]-'a']--;
                i++;
            }
            if(freq1==freq2){
                ans.push_back(i);
            }
            j++;
        }
        return ans;
    }
};
