class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int Predecessors_Count = 0;
        int target_freq = 0;
        for(int x : nums){
            if(x == target){
                target_freq++;
            }else if(x < target){
                Predecessors_Count++;
            }
        }
        vector<int> targetInd;
        for(int i=0;i<target_freq;i++){
            targetInd.push_back(Predecessors_Count+i);
        }
        return targetInd;
    }
};