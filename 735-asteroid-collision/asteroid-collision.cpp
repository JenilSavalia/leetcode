class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        int n = asteroids.size();
        stack<int> stk;

        // collisions happens when stack.top() > 0  AND  current < 0

        for (int i = 0; i < n; i++) {
            bool destroyed = false;
            while (!stk.empty() && stk.top() > 0 && asteroids[i] < 0) {

                if (abs(stk.top()) < abs(asteroids[i])) {
                    stk.pop();
                } else if (abs(stk.top()) == abs(asteroids[i])) {
                    stk.pop(); // both die
                    destroyed = true;
                    break;
                } else {              // stack astroid is bigger
                    destroyed = true; // current dies
                    break;            // Why Do We STOP Checking?
                    //  There is nothing left to collide with earlier asteroids.
                }
            }
            if (!destroyed) {
                stk.push(asteroids[i]);
            }
        }
        vector<int> result(stk.size());
        for (int i = stk.size() - 1; i >= 0; i--) {
            result[i] = stk.top();
            stk.pop();
        }

        return result;
    }
};