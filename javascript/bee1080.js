const numbers = require("fs").readFileSync("stdin", "utf8").split("\n").map(Number);
const maxNumber = Math.max(...numbers);
console.log(maxNumber);
console.log(numbers.indexOf(maxNumber) + 1);
