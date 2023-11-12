const inputs = require("fs").readFileSync("stdin", "utf8").split("\n").map(Number);
const n = inputs[0];
const numbers = inputs.slice(1);

const numbersIn = numbers.filter(number => number >= 10 && number <= 20).length;
const numbersOut = n - numbersIn;

console.log(numbersIn + " in");
console.log(numbersOut + " out");