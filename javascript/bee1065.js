const numbers = require("fs").readFileSync("stdin", "utf8").split("\n").map(Number);

const even = numbers.filter(number => number % 2 === 0).length;
console.log(even + " valores pares");