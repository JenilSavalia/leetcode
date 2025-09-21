class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if (arr.size() == 1) {
            arr[0] = -1;
            return arr;
        }

        for (int i = 0; i < arr.size(); i++) {
            int max = -1;
            for(int j = i+1;j<arr.size();j++){
                if(arr[j]>max){
                    max=arr[j];
                }
            }
            arr[i] = max;
        }

        arr[arr.size()-1] = -1;
        return arr;
    }
};