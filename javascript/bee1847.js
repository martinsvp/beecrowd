const inputs = require("fs").readFileSync("stdin", "utf8").split(" ").map((number) => Number(number));
const [a, b, c] = [inputs[0], inputs[1], inputs[2]];

function verificarHumor(a, B, C) {
	if (a > b && b <= c) {
		console.log(":)");
	} else if (a < b && b >= c) {
		console.log(":(");
	} else if (a < b && b < c && c - b < b - a) {
		console.log(":(");
	} else if (a < b && b < c && c - b >= b - a) {
		console.log(":)");
	} else if (a > b && b > c && b - c < a - b) {
		console.log(":)");
	} else if (a > b && b > c && b - c >= a - b) {
		console.log(":(");
	} else if (a === b) {
		if (b < c) {
			console.log(":)");
		} else {
			console.log(":(");
		}
	}
}

verificarHumor(a, b, c);
