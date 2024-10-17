/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    
let obj = {};

for(i=0;i<nums.length;i++){
    
if(!obj.hasOwnProperty(nums[i])){
    obj[nums[i]] = 1;
}
else{
    obj[nums[i]] = obj[nums[i]] + 1;
}

}

for(let x in obj){
    if(obj[x] == 1){
        
        return Number(x);
    }
}

    
};