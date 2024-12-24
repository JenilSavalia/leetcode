/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let count  = 0;
    for(i=0;i<nums.length;i++){

        count= count + nums[i];
    }
    let sum = (nums.length*(nums.length+1))/2
    return (sum - count)
};