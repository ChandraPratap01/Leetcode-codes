class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(int i=0;i<details.size();i++){
           string store="";
            store.push_back(details[i][11]);
            store.push_back(details[i][12]);
            int age=stoi(store);
            if(age>60){
                count++;
            }
        }
        return count;
    }
};