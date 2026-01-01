// console.log(a+b)
// console.log("This line is never reached")
// throw new ReferenceError();

// try catch example
try {
    console.log(a+b);
    console.log("This line is never reached");
    // throw new ReferenceError();

} catch(err) {
    console.log(err);
    console.log("There was an error");
    console.log("The error was saved");
}
console.log("My program does not stop")


// Example reference error
var s = "hola";
console.log(s.match(/a/))
console.log(s.match(/d/))


// Example try, catch, throw
function addTwoNums(a,b){
    try {
        if (typeof a != 'number') {
            throw new ReferenceError('The first argument is not a number');
        } else if (typeof b != 'number') {
            throw new ReferenceError('the second argument is not a number');
        } else {
            console.log(a+b);
         }
    } catch(err){
        console.log("Error!", err);
    }
    
}

addTwoNums(1,1)


// Another example with deffense programming
function letterFinder(word, match) {

    var condition1 = typeof(word) == 'string' && word.length >= 2;
    var condition2 = typeof(match) == 'string' && match.length == 1;

    if(condition1 && condition2){
        for(var i = 0; i < word.length; i++) {
            if(word[i] == match) {
                //if the current character at position i in the word is equal to the match
                console.log('Found the', match, 'at', i)
            } else {
                console.log('---No match found at', i)
            }
        }
    }
    else {
        console.log("Please pass correct arguments to the function.")
    }
}

letterFinder("cat", "1asd")
letterFinder("cat", "c")


Number(5).toPrecision(0)