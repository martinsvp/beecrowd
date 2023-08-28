let dias = parseInt(require("fs").readFileSync("stdin", "utf8"));

const anos = dias / 365;
dias %= 365;
const meses = dias / 30;
dias %= 30;

console.log(`${parseInt(anos)} ano(s)`);
console.log(`${parseInt(meses)} mes(es)`);
console.log(`${parseInt(dias)} dia(s)`);