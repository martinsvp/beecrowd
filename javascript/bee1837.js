const inputs = require("fs").readFileSync("stdin", "utf8").split(" ");
const [a, b] = [inputs[0], inputs[1]];

const calcDiv = (a, b) => {
	let q, r;

	for (r = 0; r < Math.abs(b); r++) {
		if ((a - r) % b === 0) {
			q = Math.floor((a - r) / b);
			break;
		}
	}

	console.log(`${q} ${r}`);
};

calcDiv(a, b);
