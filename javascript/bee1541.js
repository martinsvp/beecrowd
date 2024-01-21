const input = require("fs").readFileSync("stdin", "utf8").split("\n");

function calculateMinLandSize(a, b, c) {
	return Math.floor(Math.sqrt((a * b) / (c / 100)));
}

for (let i = 0; i < input.length; i++) {
	const [a, b, c] = input[i].split(" ").map(Number);
    if(a === 0 || b === 0 || c === 0) break;
	console.log(calculateMinLandSize(a, b, c));
}