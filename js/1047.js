var removeDuplicates = function(S) {
    var i = -1;
    var j = 0;
    var array = S.split("");
    while (j < array.length) {
        if (i === -1) {
            array[++i] = array[j++];
            continue;
        }
        if (array[i] == array[j]) {
            i--;
            j++;
        } else {
            i++;
            array[i] = array[j];
            j++;
        }
    }
    return array.slice(0,i+1).join("");
};

removeDuplicates("abbaca");
