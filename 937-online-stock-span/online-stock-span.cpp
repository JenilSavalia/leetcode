class StockSpanner {
public:
    int index;
    stack<pair<int, int>> stk;
    StockSpanner() { index = -1; }

    int next(int price) {

        index++;

        // finding
        while (!stk.empty() && stk.top().second <= price) {
            stk.pop();
        }

        int span;
        if (stk.empty()) {
            span = index + 1;
        } else {
            span = index - stk.top().first;
        }

        stk.push({index, price});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */