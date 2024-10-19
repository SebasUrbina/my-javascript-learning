var storeManager = {};

storeManager.rangeTilesPerTurn = 4;
storeManager.socialSkills = 10;
storeManager.health = 100;


var assistantManager = {
    movement: 3,
    socialSkills: 30,
    streetSmarts: 30,
    health: 40
}

console.log(assistantManager);
assistantManager.new_property = 30;
console.log(assistantManager);


var greet = "Hello, ";
var place = "World"
console.log(greet.charAt(0)); // 'H'

console.log("ho-ho-ho".indexOf('h')); // 0

"ho-ho-ho".split("-"); // ['ho', 'ho', 'ho']

greet.toUpperCase(); // "HELLO, "
greet.toLowerCase(); // "hello, "



// function inside object
//example of adding properties and methods to an object
var car = {};
car.mileage = 98765;
car.color = "red";
console.log(car);
car.turnTheKey = function() {
    console.log("The engine is running")
}
car.lightsOn = function() {
    console.log("The lights are on.")
}
console.log(car);
car.turnTheKey();
car.lightsOn()

// Ok, so now I have added four properties to my object. And two of those are methods. 


console.log(typeof 42);
// Expected output: "number"

console.log(typeof 'blubber');
// Expected output: "string"

console.log(typeof true);
// Expected output: "boolean"

console.log(typeof undeclaredVariable);
// Expected output: "undefined"
