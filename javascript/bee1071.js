const [n1, n2] = require("fs").readFileSync("stdin", "utf8").split("\n").map(Number);
let [maior, menor] = n1 > n2 ? [n1, n2] : [n2, n1];
let sum = 0;

for (let i = menor+1; i < maior; i++) {
	if(i % 2 !== 0) sum += i;
}

console.log(sum);
