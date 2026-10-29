class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
         
         if(n>m) return false;
           int freq1[26] = {0};
           
           for(char c: s1){
            freq1[c - 'a']++;
           }

        for(int i = 0; i<=m-n; i++) {
             int freq2[26] = {0};
        for(int j = 0; j<n; j++) {
             freq2[s2[i + j] - 'a']++;
        }

           bool match = true;
           for(int k=0; k<26; k++){
            if (freq1[k] != freq2[k]){
              match = false;
              break;
           }
        }
           if(match) {
            return true;
           }
        }
        return false;
    }
};
