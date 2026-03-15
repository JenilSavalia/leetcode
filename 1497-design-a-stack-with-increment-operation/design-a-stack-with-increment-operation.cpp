class CustomStack {
public:
    stack<int> stk;
    int limit;
    CustomStack(int maxSize) { limit = maxSize; }

    void push(int x) {
        if (stk.size() < limit) {
            stk.push(x);
        }
    }

    int pop() {
        if (stk.empty())
            return -1;

        int top = stk.top();
        stk.pop();
        return top;
    }

    void increment(int k, int val) {

        stack<int> temp;
        vector<int> arr;

        // Move stack to vector
        while (!stk.empty()) {
            arr.push_back(stk.top());
            stk.pop();
        }

        reverse(arr.begin(), arr.end());

        // Increment bottom k
        for (int i = 0; i < min(k, (int)arr.size()); i++) {
            arr[i] += val;
        }

        // Restore stack
        for (int x : arr) {
            stk.push(x);
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