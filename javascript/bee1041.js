var [x, y] = require("fs").readFileSync("stdin", "utf8").split(" ").map(Number);

function getQuadrant(x, y) {
	if (x === 0 && y === 0) {
		return "Origem";
	} else if (x === 0) {
		return "Eixo Y";
	} else if (y === 0) {
		return "Eixo X";
	} else if (x > 0 && y > 0) {
		return "Q1";
	} else if (x < 0 && y > 0) {
		return "Q2";
	} else if (x < 0 && y < 0) {
		return "Q3";
	} else {
		return "Q4";
	}
}

const quadrant = getQuadrant(x, y);
console.log(quadrant);