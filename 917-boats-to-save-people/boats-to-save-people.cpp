class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        sort(people.begin(), people.end());

        int left = 0;
        int right = people.size() - 1;

        int count = 0;

        while (left <= right) {
            int weigh = people[right]+people[left];
            if(weigh>limit){
                right--;
            }else{
                left++;
                right--;
            }

            // weigh += people[right];
            // if (weigh < limit) {
            //     weigh += people[left];
            // }
            // if (weigh <= limit) {
            //     left++;
            // }
            // right--;
            count++;
        }
        return count;
    }
};