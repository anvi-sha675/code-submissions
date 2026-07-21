class Solution {
public:
    int countSeniors(vector<string>& details) {
        // 12 13
        int count=0;
        for(int i=0;i<details.size();i++){
            string str = details[i].substr(11, 2);
            int age=stoi(str);
            if(age>60) count++;
            str.clear();
        }
        return count;
    }
};