const n = Number(require("fs").readFileSync("stdin", "utf8"));

for (let i = 2; i <= n; i += 2) {
	console.log(`${i}^2 = ${Math.pow(i, 2)}`);
}
