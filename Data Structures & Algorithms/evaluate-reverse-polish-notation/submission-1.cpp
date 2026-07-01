class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size(), i=0;
        stack<int>st;
        while(i<n){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="/" || tokens[i]=="*"){
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                if(tokens[i]=="+") st.push(num2+num1);
                if(tokens[i]=="-") st.push(num2-num1);
                if(tokens[i]=="*") st.push(num2*num1);
                if(tokens[i]=="/") st.push(num2/num1);
            }else{
                st.push(stoi(tokens[i]));
            }
            i++;
        }
        return st.top();
    }
};
