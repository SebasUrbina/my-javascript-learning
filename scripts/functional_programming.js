var currencyOne = 100;
var currencyTwo = 0;
var exhangeRate = 1.2;

function convertCurrency(amount, rate) {
  return amount * rate;
}

currencyTwo = convertCurrency(currencyOne, exhangeRate);
console.log(currencyTwo);

console.log("Hello");

// Custom function
function consoleLog(val) {
  console.log(val);
  return val;
}
val = consoleLog("Hello");

// Now I'll code another function that builds an object with a specific value:

function objectMaker(val) {
  return {
    prop: val,
  };
}
objectMaker(20);

// Recursive function
let counter = 3;
function myDay() {
  if (counter === 0) return;

  counter -= 1;
  console.log("Counter", counter);
  console.log("Morning");
  console.log("Afternoon");
  console.log("Evening");
  myDay();
}

myDay();
