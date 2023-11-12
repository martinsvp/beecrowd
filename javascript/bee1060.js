const numbers = require("fs").readFileSync("stdin", "utf8").split("\n").map(Number);

const pos = numbers.filter(number => number > 0).length;
console.log(pos + " valores positivos");