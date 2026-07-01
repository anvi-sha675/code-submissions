class Solution {
public:
    bool isValid(string s) {
        int n=s.length(), i=0;
        stack<int>st;
        while(i<n){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }else{
                if(!st.empty() && ((st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']'))){
                    st.pop();
                }else{
                    return false;
                }
            }
            i++;
        }
        return st.empty();
    }
};