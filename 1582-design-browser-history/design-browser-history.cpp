class BrowserHistory {
public:
    stack<string> backward;
    stack<string> forw;
    BrowserHistory(string homepage) { backward.push(homepage); }

    void visit(string url) {
        backward.push(url);
        // clear forward history
        while (!forw.empty()) {
            forw.pop();
        }
    }

    string back(int steps) {
        while (steps > 0 && backward.size() > 1) {
            forw.push(backward.top());
            backward.pop();
            steps--;
        }
        return backward.top();
    }

    string forward(int steps) {
        while (steps > 0 && !forw.empty()) {
            backward.push(forw.top());
            forw.pop();
            steps--;
        }
        return backward.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */