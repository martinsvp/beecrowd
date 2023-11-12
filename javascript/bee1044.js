var [n1, n2] = require("fs").readFileSync("stdin", "utf8").split(" ").map(Number);

const resp = n1 % n2 === 0 || n2 % n1 === 0 ? "Sao Multiplos" : "Nao sao Multiplos";
console.log(resp);