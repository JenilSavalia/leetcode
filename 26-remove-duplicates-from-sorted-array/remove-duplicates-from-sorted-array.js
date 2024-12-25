/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
    let temp = []

    for (i = 0; i < nums.length; i++) {
        if (!temp.includes(nums[i])) {
            temp.push(nums[i])
        }
    }
    console.log(temp)
    for (j = 0; j < temp.length; j++) {
        nums[j] = temp[j];
    }
    return temp.length
};