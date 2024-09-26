class MyCalendar {
public:
    set<pair<int,int>>st;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
       auto it=st.lower_bound({start,end});
        //check whether the current event overlaps the next event
        if(it!=st.end() && end>it->first){
            return false;
        }
         //check whether the current event overlaps the previous event
       if(it!=st.begin()){
         auto previt=prev(it);  
          if(previt->second>start){
             return false; 
            }
       }
    st.insert({start,end});
     return true;
    
    }
   
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */