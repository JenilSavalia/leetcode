class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int canEat = candyType.size() / 2;

        unordered_set<int> st;

        for(int num : candyType){
            st.insert(num);
        }

        if(st.size() >= canEat){
            return canEat;
        }else{
            return st.size();
        }

    }
};