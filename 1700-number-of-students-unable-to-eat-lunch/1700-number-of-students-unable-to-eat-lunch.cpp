class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int>sandwiche;
        queue<int>studen_;
        for(int i=sandwiches.size()-1;i>=0;i--){
            sandwiche.push(sandwiches[i]);
        }
        for(int i=0;i<students.size();i++){
            studen_.push(students[i]);
        }
        int count=0;
        while(!studen_.empty()){
            int a=studen_.front();
            int b=sandwiche.top();
            if(a!=b){
                studen_.pop();
                studen_.push(a);
                count++;
            }
            else{
                studen_.pop();
                sandwiche.pop();
                 count=0; 
            }
            if(count==studen_.size()){
                break;
            }
        }
        return studen_.size();
    }
};