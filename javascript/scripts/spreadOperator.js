// Spread operator

// Example 1
var places = ["Santiago", "Curico", "Huapi"];

function showItinerary(p1, p2, p3) {
  console.log(`I'll visit ${p1}`);
  console.log(`I'll visit ${p2}`);
  console.log(`I'll visit ${p3}`);
}
showItinerary(...places);

// Examnple 2
function count(...basket) {
    console.log(basket.length)
}

count(10, 9, 8, 7, 6);


