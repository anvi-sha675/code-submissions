class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char, int>mp1;
        unordered_map<char, int>mp2;
        for(char ch: s) mp1[ch]++;
        for(char ch: t) mp2[ch]++;
        int i=0;
        while(i<s.length() && i<t.length()){
            if(mp1[s[i]]!=mp2[s[i]]) return false;
            else{
                i++;
            }
        }
        return true;
    }
};
