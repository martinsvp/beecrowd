const numbers = require("fs").readFileSync("stdin", "utf8").split(" ").map(Number);

const sortedNumbers = [...numbers].sort((a, b) => a - b);

sortedNumbers.forEach((number) => console.log(number));
console.log();
numbers.forEach((number) => console.log(number));