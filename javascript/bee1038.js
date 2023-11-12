var input = require("fs").readFileSync("stdin", "utf8");

const menu = {
	1: 4.0,
	2: 4.5,
	3: 5.0,
	4: 2.0,
	5: 1.5,
};

const code = input.split(" ")[0];
const n = input.split(" ")[1];
const total = menu[code] * n;

console.log("Total: R$ " + total.toFixed(2));
