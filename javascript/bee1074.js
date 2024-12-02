const inputs = require("fs").readFileSync("stdin", "utf8").split("\n").map(Number);
const [n, ...numbers] = inputs;

numbers.forEach((number) => {
	if (number === 0) {
		console.log("NULL");
	} else {
		const parity = number % 2 === 0 ? "EVEN" : "ODD";
		const sign = number > 0 ? "POSITIVE" : "NEGATIVE";
		console.log(`${parity} ${sign}`);
	}
});
