class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        if (k == 0)
            return vector<int>(code.size(), 0);

        vector<int> result;

        if (k > 0) {

            int start = 1;
            int end = 1;
            int sum = 0;
            int n = code.size();

            while (end < code.size() + k) {
                sum += code[end % n];
                if (end - start + 1 == k) {
                    result.push_back(sum);
                    sum -= code[start % n];
                    start++;
                }
                end++;
            }
        }
        if (k < 0) {
            int n = code.size();
            int start = n - abs(k);
            int end = n - 1;
            int sum = 0;

            for (int i = start; i <= end; i++) {
                sum += code[i];
            }
            result.push_back(sum);

            for (int i = 1; i < n; i++) {
                sum -= code[start % n];
                start++;
                
                end++;
                sum += code[end % n];

                result.push_back(sum);
            }
        }
        return result;
    }
};