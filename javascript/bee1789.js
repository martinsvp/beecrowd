const inputs = require("fs").readFileSync("stdin", "utf8").split("\n");

const getLevel = (numbers) => {
	const max = Math.max(...numbers);
	return max >= 20 ? 3 : max > 10 ? 2 : 1;
};

let i = 0;
while (inputs[i] !== undefined && inputs[i] !== "") {
	const tam = parseInt(inputs[i]);
	const numbers = inputs[i + 1].split(" ").map(Number);

	const level = getLevel(numbers);
	console.log(level);
	i += 2;
}