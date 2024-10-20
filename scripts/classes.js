// Base class representing a generic Train
class Train {
  // Constructor to initialize the train with color and lights status
  constructor(color, lightsOn) {
    this.color = color; // The color of the train
    this.lightsOn = lightsOn; // Boolean indicating if lights are on or off
  }

  // Method to toggle the lights on and off
  toggleLights() {
    this.lightsOn = !this.lightsOn; // Toggle the lights by switching the boolean value
  }

  // Method to log the current status of the lights
  lightsStatus() {
    console.log("Lights on?", this.lightsOn); // Log whether the lights are on or off
  }

  // Method to log the current object (instance) itself
  getSelf() {
    console.log(this); // Log the current train object
  }

  // Method to log the prototype of the current object
  getPrototype() {
    var proto = Object.getPrototypeOf(this); // Get the prototype of the current object
    console.log(proto); // Log the prototype
  }
}

// Derived class representing a HighSpeedTrain, which inherits from Train
class HighSpeedTrain extends Train {
  // Constructor to initialize the high-speed train with additional properties like passengers and highSpeedOn
  constructor(passengers, highSpeedOn, color, lightsOn) {
    super(color, lightsOn); // Call the parent class constructor to set color and lightsOn properties
    this.passengers = passengers; // Number of passengers on the high-speed train
    this.highSpeedOn = highSpeedOn; // Boolean indicating if high-speed mode is on or off
  }

  // Method to toggle the high-speed mode on and off
  toggleHighSpeed() {
    this.highSpeedOn = !this.highSpeedOn; // Toggle the high-speed mode
    console.log("High speed status:", this.highSpeedOn); // Log the current high-speed mode status
  }

  // Method to toggle lights, with some additional functionality
  toggleLights() {
    super.toggleLights(); // Call the parent class's toggleLights method to toggle the lights
    super.lightsStatus(); // Call the parent class's lightsStatus method to log the lights status
    console.log("Lights are 100% operational."); // Log an additional message for high-speed trains
  }
}

// Creating a new Train object
var myFirstTrain = new Train("red", false); // Instantiate a Train with 'red' color and lights off
console.log(myFirstTrain); // Output: Train {color: 'red', lightsOn: false}

var mySecondTrain = new Train("blue", false); // Instantiate another Train with 'blue' color and lights off
var myThirdTrain = new Train("blue", false); // Another instance of Train with 'blue' color and lights off

// Creating a new Train object and testing its methods
var train4 = new Train("red", false); // Instantiate a Train with 'red' color and lights off
train4.toggleLights(); // Toggle the lights (turn on)
train4.lightsStatus(); // Output: Lights on? true
train4.getSelf(); // Output: Train {color: 'red', lightsOn: true} (logs the current instance)
train4.getPrototype(); // Output: Logs the prototype (methods defined in the prototype of Train)

// Another Train object
var train5 = new Train("blue", false); // Instantiate a Train with 'blue' color and lights off

// Creating a HighSpeedTrain object
var highSpeed1 = new HighSpeedTrain(200, false, "green", false);
// HighSpeedTrain with 200 passengers, high-speed mode off, green color, and lights off

// Testing methods on train5 (regular Train)
train5.toggleLights(); // Turn on the lights
train5.lightsStatus(); // Output: Lights on? true (lights are now on)

// Testing methods on highSpeed1 (HighSpeedTrain)
highSpeed1.toggleLights(); // Output: Lights on? true, Lights are 100% operational.
// Calls the overridden toggleLights method from HighSpeedTrain, toggles lights, logs status, and additional message.


train5.getPrototype()
highSpeed1.getPrototype(); // Train {constructor: ƒ, toggleHighSpeed: ƒ, toggleLights: ƒ



// Another example
class StationaryBike {
    constructor(position, gears) {
        this.position = position
        this.gears = gears
    }
}

class Treadmill {
    constructor(position, modes) {
        this.position = position
        this.modes = modes
    }
}

class Gym {
    constructor(openHrs, stationaryBikePos, treadmillPos) {
        this.openHrs = openHrs
        this.stationaryBike = new StationaryBike(stationaryBikePos, 8)
        this.treadmill = new Treadmill(treadmillPos, 5)
    }
}

var boxingGym = new Gym("7-22", "right corner", "left corner")a

console.log(boxingGym.openHrs) //
console.log(boxingGym.stationaryBike) //
console.log(boxingGym.treadmill) //