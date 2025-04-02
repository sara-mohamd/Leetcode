/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let newArray = []
    let i = 0;
    newArray = arr.filter(item => fn(item, i++));
    return newArray;
};