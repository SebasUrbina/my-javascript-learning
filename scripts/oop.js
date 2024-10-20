//creating an object
var virtualPet = {
  sleepy: true,
  nap: function () {
    this.sleepy = false; // this function change the property of the object.
  },
};
console.log(virtualPet.sleepy); // true
virtualPet.nap();
console.log(virtualPet.sleepy); // false

// OOP 1

var purchase1 = {
  shoes: 100,
  stateTax: 1.2,
  totalPrice: function () {
    var calculation = purchase1.shoes * purchase1.stateTax;
    console.log("Total price", calculation);
  },
};
purchase1.totalPrice(); //120

// Classes

class Car {
  constructor(color, speed) {
    (this.color = color), (this.speed = 100);
  }

  turboOn() {
    console.log("turbo is on!");
  }
}

var car1 = new Car("red", 120);

// Polymorphism example

// create your classes here
class Bird {
  useWings() {
    console.log("Flying!");
  }
}
class Eagle extends Bird {
  useWings() {
    super.useWings();
    console.log("Barely flapping!");
  }
}
class Penguin extends Bird {
  useWings() {
    console.log("Diving!");
  }
}
var baldEagle = new Eagle();
var kingPenguin = new Penguin();
baldEagle.useWings(); // "Flying! Barely flapping!"
kingPenguin.useWings(); // "Diving!"


var date = new Date();
console.log(date)