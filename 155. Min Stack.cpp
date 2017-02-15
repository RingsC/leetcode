class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        val_set.insert (x)  ;
        valuestk.push (x) ;
    }
    
    void pop() {
        multiset<int>::iterator it = val_set.find (valuestk.top());
        val_set.erase (it) ;
        valuestk.pop() ;
    }
    
    int top() {
        return valuestk.top () ;
    }
    
    int getMin() {
        return (*val_set.begin());
    }
private:
    multiset<int> val_set; 
    stack<int> valuestk;
}; 

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */