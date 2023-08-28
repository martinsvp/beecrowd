var input = require("fs").readFileSync("stdin", "utf8");

let raio = parseFloat(input);
let pi = 3.14159;

let volume = 4/3 * pi * Math.pow(raio, 3);

console.log("VOLUME = " + volume.toFixed(3));