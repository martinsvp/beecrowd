const input = require("fs").readFileSync("stdin", "utf8").split("\n");
const [n, ...lines] = input;

for (let i = 0; i < n; i++) {
	const avg = calculateAvg(lines[i].split(" ").map(Number));
    console.log(avg);
}

function calculateAvg(numbers) {
    return ((((numbers[0] * 2) + (numbers[1] * 3) + (numbers[2] * 5)) / 10).toFixed(1));
}
