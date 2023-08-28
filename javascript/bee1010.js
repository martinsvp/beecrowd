var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

var info_item1 = lines.shift().split(" ");
var info_item2 = lines.shift().split(" ");

var code1 = parseInt(info_item1.shift())
var amount1 = parseInt(info_item1.shift())
var unitary_value1 = parseFloat(info_item1.shift())

var code2 = parseInt(info_item2.shift())
var amount2 = parseInt(info_item2.shift())
var unitary_value2 = parseFloat(info_item2.shift())

var total = amount1 * unitary_value1 + amount2 * unitary_value2

console.log("VALOR A PAGAR: R$ " + total.toFixed(2))
