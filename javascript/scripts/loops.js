// for loop

for (var i = 1; i<=10; i++) {
    console.log(i)
}
console.log("Go")

for (var i = 10; i>0; i--) {
    console.log(i)
}
console.log("Go")

// for (var i = 1; i%2==0 && i<20; i++) {
//     console.log(i)
// }
// console.log("Go")

// while loop

var i = 0;
while (i <= 24){
    console.log(i)
    i += 1
}

var counter = 3;
while (counter > 0){
    console.log("Hello from while");
    counter -= 1
}

// nested loops
for (var i=2023;i<2025;i++){
    console.log('year',i);
    for (var j=1;j<=12;j++){
         console.log('-------',j);
    }
}

//nested loops - one inside another
for (var firstNum = 0; firstNum < 2; firstNum++) {
    for (var secondNum = 0; secondNum < 10; secondNum++) {
        console.log(firstNum + ", " + secondNum);
    }
}

//nested loops - one inside another
for (var firstNum = 0; firstNum < 2; firstNum++) {
    for (var secondNum = 0; secondNum < 10; secondNum++) {
        console.log(firstNum + " times " + secondNum + " equals " + firstNum * secondNum);
    }
}

// loops and conditional example
var i = 1;
for(i;i<=10;i++){
    if (i==1){
        console.log("Gold medal")
    } else if (i==2){
        console.log("Silver medla")
    } else if (i==3){
        console.log("Bronze medal")
    } else {
        console.log(i)
    }
}

// loop with switch
for (var i = 1; i <= 10; i++) {
    switch(i) {
        case 1:
            console.log("Gold medal")
            break
        case 2:
            console.log("Silver medal")
            break
        case 3:
            console.log("Bronze medal")
            break
        default:
            //this block will run if no condition matches
            console.log(i)
    }
}

