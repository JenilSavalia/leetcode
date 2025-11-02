class MyStack {
public:
    queue<int> que;
    // MyStack() {}

    void push(int x) {
        int size = que.size();
        que.push(x);
        for (int i = 0; i < size; i++) {
            que.push(que.front());
            que.pop();
        }
    }

    int pop() {
        int n = que.front();
        que.pop();
        return n;
    }

    int top() { return que.front(); }

    bool empty() { return que.size()==0; }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */