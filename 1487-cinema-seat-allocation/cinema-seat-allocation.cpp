class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        // make hash map row_num : array of blocked seat nums
        unordered_map<int, unordered_set<int>> reservedSeatsMap;

        

        // fill the map
        // int fillRowNum = 0;
        for (int i = 0; i < reservedSeats.size(); i++) {
            int row = reservedSeats[i][0];
            int seat = reservedSeats[i][1];
            reservedSeatsMap[row].insert(seat);
        }

        int count = (n - reservedSeatsMap.size()) * 2;

        // check for each row
        for (const auto& [row, seats] : reservedSeatsMap) {

            // if (!reservedSeatsMap.contains(i)) {
            //     count += 2;
            //     continue;
            // }

            bool left_blocked = seats.contains(2) || seats.contains(3) ||
                                seats.contains(4) || seats.contains(5);

            bool right_blocked = seats.contains(6) || seats.contains(7) ||
                                 seats.contains(8) || seats.contains(9);

            bool middle_blocked = seats.contains(4) || seats.contains(5) ||
                                  seats.contains(6) || seats.contains(7);

            if (!left_blocked && !right_blocked) {
                count += 2;
            } else if (!left_blocked || !right_blocked || !middle_blocked) {
                count += 1;
            }
        }

        return count;
    }
};