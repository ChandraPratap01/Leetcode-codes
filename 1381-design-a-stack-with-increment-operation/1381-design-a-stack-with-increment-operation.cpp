class CustomStack {
public:
     int i=0;
     vector<int>vec;
    int size;
    CustomStack(int maxSize) {
        size=maxSize;
       vec.resize(maxSize);
    }
    
    void push(int x) {
        if( i!=size){
            vec[i]=x;
            i++;
        }
    }
    
    int pop() {
        int a;
        if(i!=0){
           a=  vec[i-1];
            vec.pop_back();
            i--;
             return a;
        }
       return -1;
    }
    
    void increment(int k, int val) {
        for(int m=0;m<min(k,size);m++){
            vec[m]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */