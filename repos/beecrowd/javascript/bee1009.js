var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

var nome = lines.shift();
var raw_salary = parseFloat(lines.shift());
var total_sales = parseFloat(lines.shift());
var commission = 0.15 * total_sales;

var salary = raw_salary + commission;

console.log("TOTAL = R$ " + salary.toFixed(2));
