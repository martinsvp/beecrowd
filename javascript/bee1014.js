var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

const distKm = parseInt(lines.shift());
const lGasto = parseFloat(lines.shift());

const consumoKmL = distKm / lGasto;

console.log(consumoKmL.toFixed(3) + " km/l");