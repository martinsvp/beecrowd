var [a, b, c] = require("fs").readFileSync("stdin", "utf8").split(" ").map(Number);

function isTriangle(a, b, c) {
	return Math.abs(b - c) < a && a < b + c && Math.abs(a - c) < b && b < a + c && Math.abs(a - b) < c && c < a + b ? true : false;
}

if (isTriangle(a, b, c)) {
	const perimeter = a + b + c;
	console.log("Perimetro = " + perimeter.toFixed(1));
} else {
	const area = ((a + b) * c) / 2;
	console.log("Area = " + area.toFixed(1));
}
