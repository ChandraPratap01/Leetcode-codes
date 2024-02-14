class MyStack {
public:
    queue<int>Q1;
    queue<int>Q2;
    MyStack() {
        
    }
    
    void push(int x) {
        Q1.push(x);
    }
    
    int pop() {
        while(Q1.size()!=1){
            int a=Q1.front();
            Q2.push(a);
            Q1.pop();
        }
        int b=Q1.front();
        Q1.pop();
        while(!Q2.empty()){
            int a=Q2.front();
            Q1.push(a);
            Q2.pop();
        }
        return b;
    }
    int top() {
        while(Q1.size()!=1){
            int a=Q1.front();
            Q2.push(a);
           Q1.pop();
        }
        int b=Q1.front();
        Q1.pop();
        Q2.push(b);
                while(!Q2.empty()){
            int a=Q2.front();
            Q1.push(a);
            Q2.pop();
        }
        return b;    
    }
    
    bool empty() {
         return Q1.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */