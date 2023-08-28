var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

var employee_number = parseInt(lines.shift());
var worked_hours = parseInt(lines.shift());
var value_hour = parseFloat(lines.shift());

var salary = value_hour * worked_hours;

console.log("NUMBER = " + employee_number);
console.log("SALARY = U$ " + salary.toFixed(2));
