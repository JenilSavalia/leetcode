class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> rankMap;
        vector<int> ranking;

        for(int x : arr){
            rankMap[x]++;
        }

        int rank = 1;
        for(auto y : rankMap){
            // if(y.second == 1){
                rankMap[y.first] = rank;
                rank++;
            // }
            cout << y.first << " " << y.second << endl;
        }

        for(int i=0;i<arr.size();i++){
            arr[i] = rankMap[arr[i]];
        }
        return arr;
    }
};