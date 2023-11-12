const numbers = require("fs").readFileSync("stdin", "utf8").split("\n").map(Number);

const par = numbers.filter(number => number % 2 === 0).length;
const impar = numbers.filter(number => number % 2 !== 0).length;
const pos = numbers.filter(number => number > 0).length;
const neg = numbers.filter(number => number < 0).length;

console.log(par, "valor(es) par(es)");
console.log((impar), "valor(es) impar(es)");
console.log(pos, "valor(es) positivo(s)");
console.log((neg), "valor(es) negativo(s)");