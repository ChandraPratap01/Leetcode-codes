class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int i=0;
        
        int count=0;
        while(i<seats.size()){
            count+=abs(students[i]-seats[i]);
            i++;
        }
        return count;
    }
};