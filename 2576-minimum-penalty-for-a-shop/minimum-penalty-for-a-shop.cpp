class Solution {
public:
    int bestClosingTime(string customers) {

        int minHour = 0;

        int Y_till_now = 0;
        int N_till_now = 0;

        int total_panelty = 0;
        for (char c : customers) {
            if (c == 'Y') {
                total_panelty++;
            }
        }



        int currPanelty = total_panelty;

        for (int i = 0; i < customers.size(); i++) {

            if (customers[i] == 'Y') {
                Y_till_now++;
            } else if (customers[i] == 'N') {
                N_till_now++;
            }

            if (currPanelty > total_panelty - Y_till_now + N_till_now) {
                currPanelty = total_panelty - Y_till_now + N_till_now;
                minHour = i + 1;
            }
        }

        return minHour;
    }
};