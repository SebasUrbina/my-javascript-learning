console.log(Math.PI)

let {PI} = Math;

console.log(PI)

let {pi} = Math;
console.log(pi);

const colors = ['red','orange','yellow']
for (var color of colors) {
    console.log(color);
}

const car = {
    engine: true,
    steering: true,
    speed: "slow"
}

const sportCar = Object.create(car);
sportCar.speed = 'fast';

for (prop in sportCar){
    console.log("not expected", prop)
}

for (prop of Object.keys(sportCar)){
    console.log("expected", prop)
}