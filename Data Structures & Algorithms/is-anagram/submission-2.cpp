
#include<string.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int lengthS = s.length();
        int lengthT = t.length();

        if(lengthS != lengthT){
            return false;
        }

        int count[26] = {0};

        for(int i=0; i<lengthS; i++){
            count[s[i] - 'a']++;
        }

        for(int i=0; i<lengthT; i++){
            count[t[i] - 'a']--;
        }

        for(int i=0; i<26; i++){
            if (count[i] != 0){
                return false;
            }
        }

       return true; 
    }
};
