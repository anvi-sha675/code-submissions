class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int i=0;
        string first=strs[0], last=strs[strs.size()-1];
        string res="";
        while(i<first.length()){
            if(first[i]==last[i]){
                res+=first[i];
            }else break;
            i++;
        }
        return res;
    }
};