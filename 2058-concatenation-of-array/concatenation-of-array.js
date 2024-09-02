/**
 * @param {number[]} nums
 * @return {number[]}
 */
 nums = [1,2,1]
var getConcatenation = function(nums) {
    let temp = []
    for(i=0;i<nums.length;i++){
        
        temp.push(nums[i])
    }
     for(i=0;i<nums.length;i++){
        
        temp.push(nums[i])
    }

    return temp;
};