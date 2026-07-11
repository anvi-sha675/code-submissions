class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size(), i=0, sum=0;
        stack<int>st;
        while(i<n){
            if(operations[i]=="+" && !st.empty()){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.push(first);
                st.push(first+second);
            }else if(!st.empty() && operations[i]=="D"){
                int num=st.top();
                st.push(num*2);
            }else if(!st.empty() && operations[i]=="C"){
                st.pop();
            }else{
                st.push(stoi(operations[i]));
            }
            i++;
        }
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};