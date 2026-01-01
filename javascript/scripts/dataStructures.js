// forEach

var names = ["Seba", "Paz", "Eduardo", "Daniel"];

function toLog(value, index) {
  console.log(`${index}: ${value}`);
}

names.forEach(toLog);

// Filter
const nums = [20, 1, 2, 30, 2, 32];

function filterValues(num) {
  return num > 20;
}

console.log(nums.filter(filterValues));

// Another option
console.log(
  nums.filter(function (num) {
    return num > 20;
  })
);

// Advanced Example
// The example below demonstrates how to use the object data structure to complete a specific task.
// This task is to convert an object to an array:
const result = [];
const drone = {
  speed: 100,
  color: "yellow",
};
const droneKeys = Object.keys(drone);
droneKeys.forEach(function (key) {
  result.push(key, drone[key]);
});
console.log(result);
