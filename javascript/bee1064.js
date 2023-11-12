const numbers = require("fs").readFileSync("stdin", "utf8").split("\n").map(Number);

const posNumbers = numbers.filter((number) => number > 0);
const avg = posNumbers.reduce((sum, number) => sum += number / posNumbers.length, 0);

console.log(posNumbers.length + " valores positivos");
console.log(avg.toFixed(1));