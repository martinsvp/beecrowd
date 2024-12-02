const input = require("fs").readFileSync("stdin", "utf8").split("\n");
const [n, ...lines] = input;

lines.forEach((line) => {
    const [n1, n2] = line.trim().split(" ").map(Number);
    let soma = 0;

    const menor = Math.min(n1, n2); 
	const maior = Math.max(n1, n2);

	for (let i = menor + 1; i < maior; i++) {
		if (i % 2 !== 0) {
			soma += i;
		}
	}
    console.log(soma);
})

