/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */

var reverseString = function (s) {

    if (s.length % 2 == 0) {
        for (i = 0; i < s.length / 2; i++) {
            var del = "";
            del = s[i];
            s[i] = s[(s.length - 1) - i];
            s[(s.length - 1) - i] = del;

        }
        return s;
    } else {
        for (i = 0; i < (s.length / 2) - 1; i++) {
            var del = "";
            del = s[i];
            s[i] = s[(s.length - 1) - i];
            s[(s.length - 1) - i] = del;

        }
        return s;
    }

};