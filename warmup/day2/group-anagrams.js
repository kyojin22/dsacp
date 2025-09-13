// 13 September, 2025
// I did not how to sort the string in cpp so I solved this with JavaScript :)

/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    let m = new Map();
    for (let str of strs) {
        let sorted = str.split('').sort().join('');
        if (m.has(sorted)) {
            let prev = m.get(sorted);
            prev.push(str);
            m.delete(sorted);
            m.set(sorted, prev);
        } else {
            m.set(sorted, [str])
        }
    }
    return Array.from(m.values());
};

