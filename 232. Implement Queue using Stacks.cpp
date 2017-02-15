class Queue {
public:
    // Push element x to the back of queue.
    void push(int x) {
        stack<int> resv ;
        
        stk_.push (x) ;
        while (!stk_.empty()) {
            resv.push(stk_.top ());
            stk_.pop() ;
        }
        
        while (!resv.empty()) {
            stk_.push(resv.top()) ;
            resv.pop () ;
        }
    }

    // Removes the element from in front of queue.
    void pop(void) {
        stack<int> resv;
        while (!stk_.empty()) {
            resv.push(stk_.top()) ;
            stk_.pop() ;
        }
        
        resv.pop ();
        
        while (!resv.empty()) {
            stk_.push(resv.top()) ;
            resv.pop (); 
        }
    }

    // Get the front element.
    int peek(void) {
        stack <int> resv; 
        while (!stk_.empty()) {
            resv.push(stk_.top()) ;
            stk_.pop ();
        }
        int val = resv.top() ; 
        while (!resv.empty()) {
            stk_.push(resv.top()) ;
            resv.pop();
        }        
        return val;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return stk_.empty() ;
    }
private:
    std::stack<int> stk_ ;
};