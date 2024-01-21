const num = require("fs").readFileSync("stdin", "utf8");
let str = "";

for (let i = 0; i < num; i++) {
	str += "Ho" + (i < num - 1 ? " " : "");
}

console.log(str + "!");