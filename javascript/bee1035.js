var input = require("fs").readFileSync("stdin", "utf8");

const a = parseInt(input.split(" ")[0]);
const b = parseInt(input.split(" ")[1]);
const c = parseInt(input.split(" ")[2]);
const d = parseInt(input.split(" ")[3]);

if (b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0 && a % 2 === 0) {
    console.log("Valores aceitos");
} else {
    console.log("Valores nao aceitos");
}