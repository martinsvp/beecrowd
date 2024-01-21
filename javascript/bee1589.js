const inputs = require("fs").readFileSync("stdin", "utf8").split("\n");
const rays = inputs.slice(1);

for (let i = 0; i < inputs[0]; i++) {
	const [r1, r2] = rays[i].split(" ").map(Number);
    console.log(r1 + r2);
}