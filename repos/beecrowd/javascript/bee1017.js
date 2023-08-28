var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

const tempo = parseInt(lines.shift());
const vm = parseInt(lines.shift());
const dist = vm * tempo;

const litros = dist / 12;

console.log(litros.toFixed(3));