var input = require("fs").readFileSync("stdin", "utf8");

const a = parseInt(input.split(" ")[0]);
const b = parseInt(input.split(" ")[1]);
const c = parseInt(input.split(" ")[2]);

maiorAB = (a + b + Math.abs(a - b)) / 2;
maior = (maiorAB + c + Math.abs(maiorAB - c)) / 2;

console.log(`${maior} eh o maior`);