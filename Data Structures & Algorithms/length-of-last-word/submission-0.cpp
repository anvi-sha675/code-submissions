class Solution {
public:
    void ltrim(std::string &s) {
        s.erase(0, s.find_first_not_of(" \t\n\r\f\v"));
    }
    void rtrim(std::string &s) {
        size_t end = s.find_last_not_of(" \t\n\r\f\v");
        if(end != std::string::npos){
            s.erase(end + 1);
        }else{
            s.clear();
        }
    }
    void trim(std::string &s) {
        ltrim(s);
        rtrim(s);
    }
    int lengthOfLastWord(string s) {
        trim(s);
        reverse(s.begin(), s.end());
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                count++;
            }else{
                break;
            }
        }
        return count;
    }
};