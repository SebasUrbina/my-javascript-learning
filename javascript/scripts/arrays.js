// //function that takes an array as input and display all items of this array
// function listArrayItems(arr) {
//     for (var i = 0; i < arr.length; i++) {
//         console.log(i, arr[i])
//     }
// }
// var colors = ['red', 'orange', 'yellow', 'green', 'blue', 'purple', 'pink'];
// listArrayItems(colors);



// // Your task in this exercise is to code a function which will be able to take a word and locate the position of a chosen letter in that given word.  

// function letterFinder(word, match) {
//     for (var i = 0; i < word.length; i++){
//         if (word[i] == match) {
//             console.log('Found the', match, 'at', i);
//         } else {
//             console.log('Not match found at', i);
//         }
//     }
// }

// var word = "Sebastian";
// var match = "a"
// letterFinder(word, match)

function calculateWinner(squares) {

    const lines = [
        // horizontal ones
        [0,1,2],
        [3,4,5],
        [6,7,8],
        // vertical ones
        [0,3,6],
        [1,4,7],
        [2,5,8],
        // cross ones
        [0,4,8],
        [2,4,6]
    ]
    // input: ["X", "X", "O", "X", "O", "O", "O", "X", "O"]
    for (let i = 0; 1 < lines.length; i++){
        const [a, b, c ] = lines[i]
        if (squares[a] && squares[a] === squares[b] && squares[a] === squares[c]) {
            return squares[a]
        }
    }
}

squares = ["O", "X","O", "X","O", "X","O", "X","O"]

console.log(calculateWinner(squares))