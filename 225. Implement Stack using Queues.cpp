class Stack {
public:
    // Push element x onto stack.
    void push(int x) {
        qu_.push(x) ;
    }

    // Removes the element on top of the stack.
    void pop() {
        int ct =0;
        int qsize = qu_.size() ;
                 
        queue<int> resv;
        while (!qu_.empty()) {
            if (ct < qsize -1) {
                resv.push(qu_.front()) ;
                qu_.pop();
                ct++ ;
            } else qu_.pop(); 
        }
        while (!resv.empty()) {
            qu_.push(resv.front()) ;
            resv.pop() ;
        }
    }

    // Get the top element.
    int top() {
        return qu_.back() ;
    }

    // Return whether the stack is empty.
    bool empty() {
        return qu_.empty();
    }
private:
    queue<int> qu_ ;
};