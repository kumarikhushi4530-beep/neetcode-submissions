#include<string>
#include<vector>
class Solution {
public:

    string encode(vector<string>& strs) {
            string ans = "";

        for(int i=0; i<strs.size(); i++){
            ans += to_string(strs[i].length());
            ans += "#";
            ans += strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i =0;

        while(i<s.size()){
            int len=0;

        while(s[i] != '#') {
            len = len * 10 + (s[i] - '0');
            i++;
        }
        i++;
        string word = "";
        for (int j=0; j<len; j++){
            word += s[i];
            i++;
        }

        ans.push_back(word);
        }
        return ans;
    }
};
