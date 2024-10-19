//function that takes an array as input and display all items of this array
function listArrayItems(arr) {
    for (var i = 0; i < arr.length; i++) {
        console.log(i, arr[i])
    }
}
var colors = ['red', 'orange', 'yellow', 'green', 'blue', 'purple', 'pink'];
listArrayItems(colors);



// Your task in this exercise is to code a function which will be able to take a word and locate the position of a chosen letter in that given word.  

function letterFinder(word, match) {
    for (var i = 0; i < word.length; i++){
        if (word[i] == match) {
            console.log('Found the', match, 'at', i);
        } else {
            console.log('Not match found at', i);
        }
    }
}

var word = "Sebastian";
var match = "a"
letterFinder(word, match)