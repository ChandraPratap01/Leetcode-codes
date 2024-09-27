class MyCalendarTwo {
public:
    vector<pair<int,int>>doubleoverlap;
    vector<pair<int,int>>overallpair;
    MyCalendarTwo() {
        
    }
    bool checkdoubleoverlap(int start1,int end1,int start2,int end2){
        return max(start1,start2)<min(end1,end2);
    }
    pair<int,int>findcommongap(int start1,int end1,int start2,int end2){
        return {max(start1,start2),min(end1,end2)};
    }
    bool book(int start, int end) {
        for(auto it:doubleoverlap){
            if(checkdoubleoverlap(it.first,it.second,start,end)){
                return false;
            }
        }
        for(auto it:overallpair){
            if(checkdoubleoverlap(it.first,it.second,start,end)){
               doubleoverlap.push_back(findcommongap(it.first,it.second,start,end));
            }
        }
        overallpair.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */